#ifndef SP_NIM_HEADER
#define SP_NIM_HEADER

#include <stdio.h>
#include "main_aux.h"


int isGameEnded(int *arr, int numOfHeaps);
void userStep(int *arr, int numOfHeaps, int turn);
void computerStep(int *arr, int numOfHeaps, int turn);

#endif