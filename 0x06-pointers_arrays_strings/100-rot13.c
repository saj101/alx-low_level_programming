#include "main.h"

/**
 *rot13 - encoder rot13
 *@s: pointer to string
 *
 *Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char message[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char message_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0', i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == message[j])
			{
				s[i] = message_rot[j];
				break;
			}
		}
	}
	return (s);
}
