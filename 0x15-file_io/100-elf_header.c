#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void usage_error(char *argv[]);
void read_error(char *file_from);
void write_error(char *file_to);
void close_error(int file_descriptor);

int main(int argc, char *argv[])
{
  int file_from, file_to, bytes_read, bytes_written;
  char buffer[BUFFER_SIZE];

  if (argc != 3)
    usage_error(argv);

  file_from = open(argv[1], O_RDONLY);
  if (file_from == -1)
    read_error(argv[1]);

  file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
  if (file_to == -1)
    write_error(argv[2]);

  do {
    bytes_read = read(file_from, buffer, BUFFER_SIZE);
    if (bytes_read == -1)
      read_error(argv[1]);

    bytes_written = write(file_to, buffer, bytes_read);
    if (bytes_written == -1)
      write_error(argv[2]);
  } while (bytes_read > 0);

  if (close(file_from) == -1)
    close_error(file_from);

  if (close(file_to) == -1)
    close_error(file_to);

  return (0);
}

void usage_error(char *argv[])
{
  dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
  exit(97);
}

void read_error(char *file_from)
{
  dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
  exit(98);
}

void write_error(char *file_to)
{
  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
  exit(99);
}

void close_error(int file_descriptor)
{
  dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
  exit(100);
}
