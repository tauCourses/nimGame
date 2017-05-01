#include "main_aux.h"
#include "sp_nim.h"
#include <stdio.h>
#include "SPBufferset.h"

typedef void (*stepFunction)(int *heaps, int numOfHeaps, int turn); //function pointer definition

int main()
{
	stepFunction stepFunctionsArr[] = {userStep, computerStep}; //order matters! second function start!
	//SP_BUFF_SET();
	int heaps[32];
	int numOfHeaps = init(heaps);
	if (numOfHeaps == -1)
		return -1;
	int turn = 1;

//	userStep(heaps,numOfHeaps,4);
//	userStep(heaps,numOfHeaps,5);
//	userStep(heaps,numOfHeaps,6);
	
	while(!isGameEnded(heaps, numOfHeaps))
	{
		stepFunctionsArr[turn%2](heaps,numOfHeaps,turn);
		turn++;
	}
	printEnd(turn);
}
