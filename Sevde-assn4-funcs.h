#ifndef SEVDE_FUNCS_H
#define SEVDE_FUNCS_H

#include "DaleSevde-assn4-common.h"




//**************************************************************************
//  FUNCTION:  initArray
//  DESCRIP:   init array (allocate memory) for use by program
//  INPUT:     Parameters:  the size of array to create
//  OUTPUT:    Return Value: the allocated array
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
int* initArray(int size);


//**************************************************************************
//  FUNCTION:  dellocArray
//  DESCRIP:   delloc array used by program
//  INPUT:     Parameters:  the array to delloc
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: stewart
//**************************************************************************
void  dellocArray(int[]);

//**************************************************************************
//  FUNCTION:  fillArrays
//  DESCRIP:   fills provide arrays with values between 1 and 30,000
//             wrapper function that calls srand before filling arrays
//  INPUT:     Parameters:  the arrays to fill
//  OUTPUT:    Return Value: if it was succesful or not
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
bool  fillArrays(int array1[],int array2[]); 

//**************************************************************************
//  FUNCTION:  fillArray
//  DESCRIP:   fills provide array with values between 1 and 30,000
//  INPUT:     Parameters:  the array to fill
//  OUTPUT:    Return Value: if it was succesful or not
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
bool  fillArray(int array[]);



// first two statements of function
// int startTime, endTime, elapsedTime;
// startTime = clock();
// last three statements
// endTime = clock();
// elapsedTime = endTime - startTime;
// cout << "Bubble sort time " << elapsedTime << endl;
// return elaposedTime;

//**************************************************************************
//  FUNCTION:  sortArrayBubble
//  DESCRIP:   function to sort array using bubble sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t  sortArrayBubble(int array[]);      // i think these need to be references so they can be changed




//**************************************************************************
//  FUNCTION:  sortArrayQuick
//  DESCRIP:   function to sort array using quick sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t  sortArrayQuick(int array[]);  // i think these need to be references so they can be changed



//**************************************************************************
//  FUNCTION:  displayResults
//  DESCRIP:   function to display results of two sorts
//  INPUT:     Parameters:  the type of sort
//                          time taken to sort
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void    displayResults(Menu sortType1, time_t sortTime1[], Menu sortType2, time_t sortTime2[]);




#endif

