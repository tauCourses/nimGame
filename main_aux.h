#ifndef MAIN_AUX_HEADER
#define MAIN_AUX_HEADER

#include <stdio.h>

int init(int *arr);
void printEnd(int turn);
void startTurnPrint(int *arr, int numOfHeaps, int turn);
void printGame(int *arr, int numOfHeaps);
int getMaximumHeapSize(int *arr, int numOfHeaps);
#endif