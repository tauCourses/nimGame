#include "sp_nim.h"



int isGameEnded(int *heaps, int numOfHeaps)
{
	for(int i=0; i<numOfHeaps;i++)
		if(heaps[i] > 0)
			return 0;
	return 1;
}

void userTurn(int *heaps, int numOfHeaps, int turn)
{
	int selectedHeap, amount;
	startTurnPrint(heaps, numOfHeaps,turn);
	printGame(heaps, numOfHeaps);
	printf("Your turn: please enter the heap index and the number of removed objects.\n");
	int readValue = scanf("%d%d", &selectedHeap, &amount);
	while(readValue != 2 || !checkHeapSelection(heaps,numOfHeaps,selectedHeap,amount))
	{
		printf("Error: Invalid input.\nPlease enter again the heap index and the number of removed objects.\n");
		readValue = scanf("%d%d", &selectedHeap, &amount);
	}
	printf("You take %d objects from heap %d.\n", amount, selectedHeap);
	heaps[selectedHeap-1] -= amount;
}

void computerTurn(int *heaps, int numOfHeaps, int turn)
{
	int nimSum = 0, currentIndex = 0, objectsRemoved = 0;

	startTurnPrint(heaps, numOfHeaps,turn);
	for (int i = 0; i < numOfHeaps; i++)
		nimSum ^= heaps[i];

	if (nimSum != 0)
	{
		while ((heaps[currentIndex]^nimSum) >= heaps[currentIndex]) //if cuurent heap is not a winning heap
			currentIndex++;
		objectsRemoved = heaps[currentIndex] - (heaps[currentIndex]^nimSum);
	}
	else //if there is no winning heap
	{
		while (heaps[currentIndex] < 1)
				currentIndex++;
		objectsRemoved = 1;
	}
	heaps[currentIndex] -= objectsRemoved; //remove of the objects by computer
	printf("Computer takes %d objects from heap %d.\n", objectsRemoved, currentIndex+1);
}

int checkHeapSelection(int *heaps, int numOfHeaps, int selectedHeap, int amouont)
{
	if(selectedHeap < 1 || selectedHeap > numOfHeaps)	
		return 0;
	if(heaps[selectedHeap-1] < amouont)
		return 0;

	return 1;
}