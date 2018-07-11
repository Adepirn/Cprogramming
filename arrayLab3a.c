#include <stdio.h>

int main()
{
	int studentAge[13] = {0};
	int i = 0;
	char saying[] = {'G', 'o', '\n', 'A', 'w', 'a', 'y', '\0'};


	studentAge [0] = 27;
	studentAge [1] = 26;
	studentAge [2] = 34;
	studentAge [3] = 21;
	studentAge [4] = 37;
	studentAge [5] = 32;
	studentAge [6] = 29;
	studentAge [7] = 31;
	studentAge [8] = 34;
	studentAge [9] = 25;
	studentAge [10] = 28;
	studentAge [11] = 31;
	studentAge [12] = 30;

	for (i=0; i < 13; i++)
	{
		printf("Contents of student age are %d \n", studentAge[i]);
	}

	for (i=0; i < 8; i++)
	{
		printf("%c", saying[i]);
	}

	printf("\n");

	return 0;


}