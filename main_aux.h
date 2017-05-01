#ifndef MAIN_AUX_HEADER
#define MAIN_AUX_HEADER

#include <stdio.h>

int init(int *heaps);
void printEnd(int turn);
void startTurnPrint(int *heaps, int numOfHeaps, int turn);
void printGame(int *heaps, int numOfHeaps);
int getMaximumHeapSize(int *heaps, int numOfHeaps);
#endif