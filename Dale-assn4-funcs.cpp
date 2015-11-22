#include "Dale-assn4-funcs.h"

#include <iostream>
#include <string>

using namespace std;

int   getInputChoiceInt(int min, int max) {
	int resp;
	bool continueLoop = true;
	while(continueLoop ) {
	 cout << "Enter the number of times to repeat each sort (1 or more): ";
	 cin >> resp;
	 if(resp >= min && resp <= max) {
	 	continueLoop = false;
	 }else{
	 	cout << "Please enter a valid number between " << min << " and " << max << "." << endl;
	 }
    }
	return resp;
}

//**************************************************************************
//  FUNCTION:  getInputChoiceSort
//  DESCRIP:   get the input from user of which sort algo's to use, or exit
//  INPUT:     Parameters:	references to output params
//  OUTPUT:    Return Value: the choices picked by user
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void  getInputChoiceSort(Menu& choice1,Menu& choice2) {
	
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
//  FUNCTION:  sortArrayInsertion
//  DESCRIP:   function to sort array using insertion sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayInsertion(int array[]) {
	time_t startTime, endTime, elapsedTime;
    startTime = clock();

	endTime = clock();
	elapsedTime = endTime - startTime;
	cout << "Insertion sort time " << elapsedTime << endl;
	return elapsedTime;
}


//**************************************************************************
//  FUNCTION:  sortArrayMerge
//  DESCRIP:   function to sort array using merge sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayMerge(int array[]) {
	time_t startTime, endTime, elapsedTime;
    startTime = clock();

	endTime = clock();
	elapsedTime = endTime - startTime;
	cout << "Merge sort time " << elapsedTime << endl;
	return elapsedTime;
}


//**************************************************************************
//  FUNCTION:  verifySort
//  DESCRIP:   function to verify array is sorted
//  INPUT:     Parameters:  the array to verify
//  OUTPUT:    Return Value: if it is correctly sorted
//  IMPLEMENTED BY: Stewart
//**************************************************************************
bool    verifySort(int array[], int size) {
	bool resp = true;
	bool continueLoop;
	for(int i=1;i<size && continueLoop;i++) {
		if(array[i-1] > array[i]) {
		 resp = false;
		 continueLoop = false;
	    }
	}
	return resp;
}

