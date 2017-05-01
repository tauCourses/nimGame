#include "sp_nim.h"


int isGameEnded(int *arr, int numOfHeaps)
{
	return arr[0] == numOfHeaps;
}
void userStep(int *arr, int numOfHeaps, int turn)
{
	int selectedHeap, amount;
	startTurnPrint(arr, numOfHeaps,turn);
	printGame(arr, numOfHeaps);
	printf("Your turn: please enter the heap index and the number of removed objects.\n");
	int readValue = scanf("%d%d", &selectedHeap, &amount);
	while(readValue != 2 || !checkHeapSelection(arr,numOfHeaps,selectedHeap,amount))
	{
		printf("Error: Invalid input.\nPlease enter again the heap index and the number of removed objects.\n");
		readValue = scanf("%d%d", &selectedHeap, &amount);
	}
	printf("You take %d objects from heap %d.\n", amount, selectedHeap);
	arr[selectedHeap-1] -= amount;
}
void computerStep(int *arr, int numOfHeaps, int turn)
{
	printf("computer step,  buzz!!! %d\n", turn);
	arr[0] = numOfHeaps;
	arr[0] = 7;
}
int checkHeapSelection(int *heaps, int numOfHeaps, int selectedHeap, int amouont)
{
	if(selectedHeap < 1 || selectedHeap > numOfHeaps)	
		return 0;
	if(heaps[selectedHeap-1] < amouont)
		return 0;

	return 1;
}
