#include "main_aux.h"
#include "sp_nim.h"
#include <stdio.h>
#include "SPBufferset.h"

typedef void (*stepFunction)(int *arr, int numOfHeaps, int turn); //function pointer definition

int main()
{
	//stepFunction stepFunctionsArr[] = {userStep, computerStep}; //order matters! second function start!
	SP_BUFF_SET();
	int heaps[32];
	int numOfHeaps = init(heaps);
	if (numOfHeaps == -1)
		return -1;
	int turn = 1;

	heaps[0] = 3;
	heaps[1] = 5;
	heaps[2] = 2;
	heaps[3] = 0;
	heaps[4] = 5;
	numOfHeaps = 6;
	userStep(heaps,numOfHeaps,4);/*
	while(!isGameEnded(arr, numOfHeaps))
	{
		stepFunctionsArr[turn%2](arr,numOfHeaps,turn);
		turn++;
	}*/
	printEnd(turn);
}
