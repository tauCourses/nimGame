#include "main_aux.h"
#include "sp_nim.h"

typedef void (*stepFunction)(int *arr, int numOfHeaps, int turn); //function pointer definition

int main()
{
	stepFunction stepFunctionsArr[] = {computerStep, userStep} ;
	
	int arr[32];
	int numOfHeaps = init(arr);
	int turn == 0;
	
	while(!isGameEnded())
		stepFunctionsArr[(turn++)%2](arr,numOfHeaps,turn);

	printEnd(turn);
}