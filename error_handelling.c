#include"main.h"

char *print_num(int num)
{
	int num_of_digits = num;
	int digitCount = 1;
	while (num_of_digits /= 10)
		digitCount++;
    	char *counter = (char *)malloc(digitCount + 1);
	if (counter == NULL) 
		return NULL;
	for (int i = digitCount - 1; i >= 0; i--)
	{
		counter[i] = (num % 10) + '0';
		num /= 10;
	}

	counter[digitCount] = '\0';
	return counter;
}
