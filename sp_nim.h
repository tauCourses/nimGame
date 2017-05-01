#ifndef SP_NIM_HEADER
#define SP_NIM_HEADER

#include <stdio.h>
#include "main_aux.h"


int isGameEnded(int *heaps, int numOfHeaps);
void userTurn(int *heaps, int numOfHeaps, int turn);
void computerTurn(int *heaps, int numOfHeaps, int turn);
int checkHeapSelection(int *heaps, int numOfHeaps, int selectedHeap, int amouont);

#endif