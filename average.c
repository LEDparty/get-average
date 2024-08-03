//averages as many numbers as you could want to type
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 4000

//used to test punctuations that are not '.'
int invalidPunct(int character)
{
	switch(character)
	{
		case '!':
		case '@':
		case '#':
		case '$':
		case '%':
		case '^':
		case '&':
		case '*':
		case '(':
		case ')':
		case '-':
		case '_':
		case '+':
		case '=':
		case '\'':
		case '"':
		case ':':
		case ';':
		case ',':
		case '<':
		case '>':
		case '?':
		case '{':
		case '}':
		case '[':
		case ']':
		case '\\':
		case '/':
			return 1;
		default:
			return 0;
	}			
}

//allows user to input 'ok' to get average
double *InputLoop(int *size)
{
	char testString[MAX];
    double *numbers = malloc(MAX * sizeof(double));
	int character;
	//index for double array
	int i = 0;
	
	while(1)
	{
		printf("Part %i: ", i + 1);
		//index for input string
		int j = 0;

		while((character = getchar()) != '\n')
		{
			testString[j++] = character;
			//end input when user types anything other than a
			//number
			if(isalpha(character) || isspace(character) || invalidPunct(character))
			{
				printf("End of input\n");

				*size = i;

				return numbers;
			}
	   	}

		testString[j] = '\0';

		//convert string to double and
		//increment index
		sscanf(testString, "%lf", &numbers[i]);

		i++;
	}
}

int main()
{
	int size = 0;

	printf("Keep entering numbers. Enter 'ok' to average them.\n\n");

	double *numbers = InputLoop(&size);

	double sumTotal = 0;

	for(int i = 0; i < size; i++)
	{
		sumTotal += numbers[i];
	}
	//exclude end machine when dividing for average
	double average = sumTotal / size;

	printf("The average is %g\n", average);

	return 0;
}

