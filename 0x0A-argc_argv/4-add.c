#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 *
 *
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int result = 0;
	if (argc > 1)
	{
	for (int i = 1; i < argc; i++)
	{
	int num;
	int j = 0;
	while (argc[i][j] != '\0'
	{
	if (argc[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return (1);
	}
	j++;
	}
	num = atoi(argc[i]);
	result += num;
	}
	printf("%d\n", result);
	}
	else
	{
	printf("0\n");
	}
	return 0;
	}

