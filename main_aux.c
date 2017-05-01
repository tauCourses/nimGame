#include "main_aux.h"

int init(int *arr)
{
	printf("Hi it's init function! yayyyy\n");
	arr[0] = 7;
	return 3;
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
		printf(" h%d=%d", i, arr[i]);
	printf(".\n");
}
void printGame(int *arr, int numOfHeaps)
{
	for(int i = getMaximumHeapSize(arr,numOfHeaps); i>=0; i--)
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
	printf("max - %d\n", max);
	return max;
}