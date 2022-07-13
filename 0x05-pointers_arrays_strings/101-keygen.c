#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen
 * Return: 0 Always
 */
#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

  
void randomPasswordGeneration(int N)
{
	int i = 0;
	int randomizer = 0;
	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N];
	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		 if (randomizer == 1)
		 {
			 password[i] = numbers[rand() % 10];
