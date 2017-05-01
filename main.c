#include "main_aux.h"
#include "sp_nim.h"
#include <stdio.h>
//#include "SPBufferdet.h"

typedef void (*stepFunction)(int *arr, int numOfHeaps, int turn); //function pointer definition

int main()
{
	//stepFunction stepFunctionsArr[] = {userStep, computerStep}; //order matters! second function start!
	//SP_BUFF_SET();
	int arr[32];
	int numOfHeaps = init(arr);
	if (numOfHeaps == -1)
		return -1;
	int turn = 1;

	userStep(arr,numOfHeaps,4);
	userStep(arr,numOfHeaps,5);
	userStep(arr,numOfHeaps,6);/*
	
	while(!isGameEnded(arr, numOfHeaps))
	{
		stepFunctionsArr[turn%2](arr,numOfHeaps,turn);
		turn++;
	}*/
	printEnd(turn);
}
