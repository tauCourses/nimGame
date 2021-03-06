#include "main_aux.h"

int init(int *heaps)//initialize the first parameter for begining of the game
{
	int numOfHeaps;
	printf("Enter the number of heaps:\n");
	fflush(stdout);
	if(scanf("%d", &numOfHeaps) != 1)
	{
		printf("Error: the number of heaps must be between 1 and 32.\n");
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
		fflush(stdout);
		if( scanf("%d", &heaps[i]) != 1 )
		{
			printf("Error: the size of heap %d should be positive.\n", i+1);
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

void printEnd(int turn)//print end message when the game is over
{
	if(turn%2)
		printf("Computer wins!\n");
	else
		printf("You win!\n");
	fflush(stdout);
}

void startTurnPrint(int *heaps, int numOfHeaps, int turn)//prints the current status at the begining of each turn
{
	printf("In turn %d heap sizes are:", turn);
	for(int i=0;i<numOfHeaps;i++)
		printf(" h%d=%d", i+1, heaps[i]);
	printf(".\n");
	fflush(stdout);
}

void printGame(int *heaps, int numOfHeaps)
{

	for(int i = getMaximumHeapSize(heaps,numOfHeaps) - 1; i>=0; i--)
	{
		for(int j=0;j<numOfHeaps;j++)
		{
			if(heaps[j] > i)
				printf("*");
			else
				printf(" ");
			if(j<numOfHeaps-1)
				printf("\t");
		}
		printf("\n");
	}
}

int getMaximumHeapSize(int *heaps, int numOfHeaps)//returns the size of the maximal heap
{
	int max = heaps[0];
	for(int i=0; i<numOfHeaps;i++)
		if(heaps[i]>max)
			max = heaps[i];
		
	return max;
}
