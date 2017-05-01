#include "main_aux.h"
#include "sp_nim.h"
#include <stdio.h>
#include "SPBufferset.h"


int main()
{
	//SP_BUFF_SET();
	int heaps[32], turn = 1, numOfHeaps;
	
	numOfHeaps = init(heaps);
	if (numOfHeaps == -1)
		return -1;
	
	while(!isGameEnded(heaps, numOfHeaps))
	{
		if(turn++ % 2)
			computerTurn(heaps,numOfHeaps,turn);
		else
			userTurn(heaps,numOfHeaps,turn);
	}

	printEnd(turn);
}
