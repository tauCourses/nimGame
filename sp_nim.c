#include "sp_nim.h"


int isGameEnded(int *heaps, int numOfHeaps)
{
	return heaps[0] == numOfHeaps;
}
void userStep(int *arr, int numOfHeaps, int turn)
{
	startTurnPrint(arr, numOfHeaps,turn);
	printGame(arr, numOfHeaps);
}
void computerStep(int *heaps, int numOfHeaps, int turn)
{
	int nimSum = 0;
	int currentIndex = 0;
	int objectsRemoved = 0;

	startTurnPrint(heaps, numOfHeaps,turn);
	for (int i = 0; i < numOfHeaps; i++)
	{
		nimSum ^= heaps[i];
	}

	if (nimSum != 0)
	{
		while ((heaps[currentIndex]^nimSum) >= heaps[currentIndex]) //if cuurent heap is not a winning heap
			currentIndex++;
		objectsRemoved = heaps[currentIndex] - heaps[currentIndex]^nimSum;
	}
	else //if there is no winning heap
	{
		while (heaps[currentIndex] < 1)
				currentIndex++;
		objectsRemoved = 1;
	}
	heaps[currentIndex] -= objectsRemoved; //remove of the objects by computer
	printf("Computer takes %d objects from heap %d.", objectsRemoved, currentIndex+1);
}
