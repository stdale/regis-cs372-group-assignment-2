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
  char ch1='a',ch2='a';
  bool continueLoop = true;
  while(continueLoop) {
  	cout << "Choose two sorts you wish to compare:" << endl
  	     << "\tB = Bubble sort" << endl
  	     << "\tI = Insertion sort" << endl
  	     << "\tM = Merge sort"  << endl
  	     << "\tQ = Quick sort"  << endl
  	     << "\tE = Exit program" << endl << endl
  	     << "Enter two letter choices (or EE to exit): ";
  	cin >> ch1;
  	cin >> ch2;
  	if((ch1 == 'B' || ch1 == 'I' || ch1 == 'M' || ch1 == 'Q' || ch1 == 'E') &&
	   (ch2 == 'B' || ch2 == 'I' || ch2 == 'M' || ch2 == 'Q' || ch2 == 'E'))  {
	    continueLoop = false;   	
	}else{
		cout << "Invalid option, please enter B|I|M|Q|E as valid option." << endl;
	}
  }
  switch(ch1) {
  	case 'B':
  		choice1 = Bubble;
  		break;
  	case 'I':
  		choice1 = Insertion;
  		break;
  	case 'M':
  		choice1 = Merge;
  		break;
  	case 'Q':
  		choice1 = Quick;
  		break;
  	case 'E':
  		choice1 = Exit;
  		break;
  }
  switch(ch2) {
  	case 'B':
  		choice2 = Bubble;
  		break;
  	case 'I':
  		choice2 = Insertion;
  		break;
  	case 'M':
  		choice2 = Merge;
  		break;
  	case 'Q':
  		choice2 = Quick;
  		break;
  	case 'E':
  		choice2 = Exit;
  		break;
  }
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

	int j,holder;
		
	for (int i = 0; i < ARRAY_SIZE; i++){
		j = i;
		
		while (j > 0 && array[j] < array[j-1]){
		  holder = array[j];
		  array[j] = array[j-1];
		  array[j-1] = holder;
		  j--;
	  }
	}

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

