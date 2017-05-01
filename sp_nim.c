#include "sp_nim.h"


int isGameEnded(int *arr, int numOfHeaps)
{
	return arr[0] == numOfHeaps;
}
void userStep(int *arr, int numOfHeaps, int turn)
{
	startTurnPrint(arr, numOfHeaps,turn);
	printGame(arr, numOfHeaps);
}
void computerStep(int *arr, int numOfHeaps, int turn)
{
	printf("computer step,  buzz!!! %d\n", turn);
	arr[0] = numOfHeaps;
	arr[0] = 7;
}