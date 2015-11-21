#include "Sevde-assn4-funcs.h"

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//**************************************************************************
//  FUNCTION:  getInputChoiceSort
//  DESCRIP:   get the input from user of which sort algo's to use, or exit
//  INPUT:     Parameters:	references to output params
//  OUTPUT:    Return Value: the choices picked by user
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void  getInputChoiceSort(Menu& choice1,Menu& choice2) {
	
}



//**************************************************************************
//  FUNCTION:  initArray
//  DESCRIP:   init array (allocate memory) for use by program
//  INPUT:     Parameters:  the size of array to create
//  OUTPUT:    Return Value: the allocated array
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
int* initArray(int size) {
	int* array;
	
	return array;
}



//**************************************************************************
//  FUNCTION:  fillArrays
//  DESCRIP:   fills provide arrays with values between 1 and 30,000
//             wrapper function that calls srand before filling arrays
//  INPUT:     Parameters:  the arrays to fill
//  OUTPUT:    Return Value: if it was succesful or not
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
bool  fillArrays(int array1[],int array2[]) { // will call srand once
  bool resp;
  
  
  return resp;	
}

//**************************************************************************
//  FUNCTION:  fillArray
//  DESCRIP:   fills provide array with values between 1 and 30,000
//  INPUT:     Parameters:  the array to fill
//  OUTPUT:    Return Value: if it was succesful or not
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
bool  fillArray(int array[]) {
	bool resp;
	
	return resp;
}

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
time_t  sortArrayBubble(int array[]){
	time_t startTime, endTime, elapsedTime;
    startTime = clock();

	endTime = clock();
	elapsedTime = endTime - startTime;
	cout << "Bubble sort time " << elapsedTime << endl;
	return elapsedTime;	
}




//**************************************************************************
//  FUNCTION:  sortArrayQuick
//  DESCRIP:   function to sort array using quick sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t  sortArrayQuick(int array[]) {
	time_t startTime, endTime, elapsedTime;
    startTime = clock();

	endTime = clock();
	elapsedTime = endTime - startTime;
	cout << "Quick sort time " << elapsedTime << endl;
	return elapsedTime; 
}



//**************************************************************************
//  FUNCTION:  displayResults
//  DESCRIP:   function to display results of two sorts
//  INPUT:     Parameters:  the type of sort
//                          time taken to sort
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void    displayResults(Menu sortType1, time_t sortTime1[], Menu sortType2, time_t sortTime2[]) {
	
	
}

