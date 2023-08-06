#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}
	return (0);
}
