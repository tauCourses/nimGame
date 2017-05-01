#include "main_aux.h"

int init(int *arr)
{
	printf("Hi it's init function! yayyyy\n");
	arr[0] = 7;
	return 3;
}
void printEnd(int turn)
{
	printf("end! finnaly %d\n", turn);
}