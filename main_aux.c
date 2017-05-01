#include "main_aux.h"

int init(int *heaps)
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
		if( scanf("%d", &heaps[i]) != 1 )
		{
			printf("Error: undefined error.\n");
			fflush(stdout);
			return -1;
		}
		if (heaps[i] < 1)
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
	if(turn%2)
		printf("You win!\n");
	else
		printf("Computer wins!\n");
}

void startTurnPrint(int *arr, int numOfHeaps, int turn)
{
	printf("In turn %d heap sizes are:", turn);
	for(int i=0;i<numOfHeaps;i++)
		printf(" h%d=%d", i+1, arr[i]);
	printf(".\n");
}

void printGame(int *arr, int numOfHeaps)
{
	for(int i = getMaximumHeapSize(arr,numOfHeaps) - 1; i>=0; i--)
	{
		for(int j=0;j<numOfHeaps;j++)
		{
			if(arr[j] > i)
				printf("*");
			if(j<numOfHeaps-1)
				printf("\t");
		}
		printf("\n");
	}
}

int getMaximumHeapSize(int *arr, int numOfHeaps)
{
	int max = arr[0];
	for(int i=0; i<numOfHeaps;i++)
		if(arr[i]>max)
			max = arr[i];
		
	return max;
}
