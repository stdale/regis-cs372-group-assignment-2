#ifndef DALE_FUNCS_H
#define DALE_FUNCS_H

#include <ctime>

#include "DaleSevde-assn4-common.h"

//**************************************************************************
//  FUNCTION:  getInputChoiceInt
//  DESCRIP:   get the input from user of how many times to run sort
//  INPUT:     Parameters:	min, the min acceptable value
//                          max, the max acceptable value
//  OUTPUT:    Return Value: the choices picked by user
//  IMPLEMENTED BY: Stewart
//**************************************************************************
int   getInputChoiceInt(int min, int max);

//**************************************************************************
//  FUNCTION:  getInputChoiceSort
//  DESCRIP:   get the input from user of which sort algo's to use, or exit
//  INPUT:     Parameters:	references to output params
//  OUTPUT:    Return Value: the choices picked by user
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void  getInputChoiceSort(Menu& choice1,Menu& choice2);





// first two statements of function
// int startTime, endTime, elapsedTime;
// startTime = clock();
// last three statements
// endTime = clock();
// elapsedTime = endTime - startTime;
// cout << "Bubble sort time " << elapsedTime << endl;
// return elaposedTime;

//**************************************************************************
//  FUNCTION:  sortArrayInsertion
//  DESCRIP:   function to sort array using insertion sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayInsertion(int array[],int size); // i think these need to be references so they can be changed


//**************************************************************************
//  FUNCTION:  sortArrayMerge
//  DESCRIP:   function to sort array using merge sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayMerge(int array[],int size);  // i think these need to be references so they can be changed


//**************************************************************************
//  FUNCTION:  verifySort
//  DESCRIP:   function to verify array is sorted
//  INPUT:     Parameters:  the array to verify
//  OUTPUT:    Return Value: if it is correctly sorted
//  IMPLEMENTED BY: Stewart
//**************************************************************************
bool    verifySort(int array[],int size);


#endif

