#include "main_aux.h"
#include "sp_nim.h"

typedef void (*stepFunction)(int *arr, int numOfHeaps, int turn); //function pointer definition

int main()
{
	//stepFunction stepFunctionsArr[] = {userStep, computerStep}; //order matters! second function start!

	int arr[32];
	int numOfHeaps = init(arr);
	int turn = 1;

	arr[0] = 3;
	arr[1] = 5;
	arr[2] = 2;
	arr[3] = 0;
	arr[4] = 5;
	numOfHeaps = 6;
	userStep(arr,numOfHeaps,4);/*
	while(!isGameEnded(arr, numOfHeaps))
	{
		stepFunctionsArr[turn%2](arr,numOfHeaps,turn);
		turn++;
	}*/
	printEnd(turn);
}