/*  Lab3a
*	Mahaffey, Richard
*	11 July 2018
*/


#include <stdio.h>

int main()
{
	int studentAge[13] = {27, 26, 34, 21, 37, 32, 29, 31, 34, 25, 28, 31, 30};
	int i = 0;
	char saying[] = {"life\nis\nstrange\n"};


	for (i=0; i < 13; i++)
	{
		printf("Contents of student age are %d \n", studentAge[i]);
	}

	printf("%s /n", saying);


	return 0;


}