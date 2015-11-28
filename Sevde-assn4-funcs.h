//******************************************************************************
//  FILE NAME:	Sevde-assn4-funcs.h
//  DESCRIPTION: This file contains the ADT function prototypes for
//               DaleSevde-assn4-main.cpp
//******************************************************************************

#ifndef SEVDE_FUNCS_H
#define SEVDE_FUNCS_H

#include "DaleSevde-assn4-common.h"

int* initArray(int size);
void dellocArray(int[]);
bool fillArrays(int array1[],int array2[]);
time_t sortArrayBubble(int array[], int size);
time_t sortArrayQuick(int array[],int size);
void quick_Sort(int array[], int left, int right);
void displayResults(Menu sortType1, time_t sortTime1[], Menu sortType2, time_t sortTime2[], int);

#endif


