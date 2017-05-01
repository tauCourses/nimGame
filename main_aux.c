#include "main_aux.h"

int init(int *arr)
{
	int numOfHeaps;
	printf("Enter the number of heaps\n");
	fflush(stdout);
	if(scanf("%d", &numOfHeaps) != 1)
	{
		printf("Error: undefined error.\n");
		fflush(stdout);
		return -1;
	}
	if ((numOfHeaps < 1) | (numOfHeaps > 32))
	{
		printf("Error: the number of heaps must be between 1 and 32.\n");
		return -1;
	}
	printf("Enter the heap sizes:\n");
	fflush(stdout);
	for (int i=0; i < numOfHeaps; i++)
	{
		if( scanf("%d", &arr[i]) != 1 )
		{
			printf("Error: undefined error.\n");
			fflush(stdout);
			return -1;
		}
		if (arr[i] < 1)
		{
			printf("Error: the size of heap %d should be positive.\n", i+1);
			fflush(stdout);
			return -1;
		}
	}
	fflush(stdout);
	return numOfHeaps;
}
void printEnd(int turn)
{
	printf("end! finnaly %d\n", turn);
}
