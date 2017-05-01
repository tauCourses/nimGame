#include "main_aux.h"
#include "sp_nim.h"

typedef void (*stepFunction)(int *arr, int numOfHeaps, int turn); //function pointer definition

int main()
{
	stepFunction stepFunctionsArr[] = {userStep, computerStep}; //order matters! second function start!

	int arr[32];
	int numOfHeaps = init(arr);
	int turn = 1;

	while(!isGameEnded(arr, numOfHeaps))
	{
		stepFunctionsArr[turn%2](arr,numOfHeaps,turn);
		turn++;
	}
	printEnd(turn);
}