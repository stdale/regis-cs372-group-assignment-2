#include "Dale-assn4-funcs.h"

#include <iostream>
#include <iomanip>
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
//  IMPLEMENTED BY: Stewart
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
  	ch1 = toupper(ch1);
  	ch2 = toupper(ch2);
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
//                          the size of the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayInsertion(int array[],int size) {
	time_t startTime, endTime, elapsedTime;
    startTime = clock();

    // local variables used as scratchpad 
    // and index into array
	int j,holder;
	
	// loop through the array for each item
	for (int i = 0; i < size; i++){
		j = i;
		// check to see if we go into inner loop
		while (j > 0 && array[j] < array[j-1]){
		  // switch the two values
		  holder = array[j];
		  array[j] = array[j-1];
		  array[j-1] = holder;
		  // decrement index
		  j--;
	  }
	}

	endTime = clock();
	elapsedTime = endTime - startTime;
	cout << setw(28) << "Insertion sort time " << elapsedTime << endl;
	return elapsedTime;
}

//**************************************************************************
//  FUNCTION:  sortArrayMerge
//  DESCRIP:   function that implements merge sort
//             by recursively calling merge sort 
//             breaking the array into smaller parts 
//             and then sorting those smaller parts.
//             finally we merge the sorted arrays back into one
//  INPUT:     Parameters:  the array to sort
//                          the low poing of the array we are sorting
//                          the high point of the array we are sorting
//  OUTPUT:    Return Value: N/A
//  IMPLEMENTED BY: Stewart
//**************************************************************************
void mergesort(int array[], int low, int high) {

    
    if (low < high)    {
    	// use this to determine the two halfs of our array
        int index=(low+high)/2;
        // recursively call mergesort, passing it the bottom half of the array to sort
        mergesort(array,low,index);
        // recursively call mergesort, passing it the upper half of the array to sort
        mergesort(array,index+1,high);
        // now we merge the arrays into one
        merge(array,low,high,index);
    }
}

//**************************************************************************
//  FUNCTION:  merge
//  DESCRIP:   function that merges the two sorted arrays
//             into one array
//  INPUT:     Parameters:  the array to sort
//                          the low poing of the array we are sorting
//                          the high point of the array we are sorting
//                          the index of middle of the array we are merging, so we now which is top half and bottom half
//  OUTPUT:    Return Value: N/A
//  IMPLEMENTED BY: Stewart
//**************************************************************************
void merge(int array[], int low, int high, int index) {
    // use this as scratch pad 
    static int scratchPad[ARRAY_SIZE];
	
	// create the local variables we will use to index into the arrays
	int i = low, j = index+1, k =low;
    
    // loop through the low and high point of the array and 
    // check to see which value we copy into scratch pad
    while (i <= index && j <= high) {
        if (array[i] < array[j]) {
		    // copy in the value from the lower array
            scratchPad[k++] = array[i++];
        }else{
		    // copy in the value from the upper array
            scratchPad[k++] = array[j++];
        }
    }
    
    // at this point one of the arrays has had 
    // all its elements copied into scratchpad
    // so now we copy the rest of the items from
    // the other array into scratch pad
    
    while (i <= index) {
        scratchPad[k++] = array[i++];
    }
    
    while (j <= high) {
        scratchPad[k++] = array[j++];
    }
    
    // now copy the sorted,merged values from 
    // scratch pad back into the array
    for (i = low; i < k; i++){
        array[i] = scratchPad[i];
    }
}


//**************************************************************************
//  FUNCTION:  sortArrayMerge
//  DESCRIP:   this is a wrapper function that starts the timer and
//             then calls the actual merge sort function.  
//             since merge sort is recursive, we need this wrapper function
//             since the actual merge sort call has different parameters
//  INPUT:     Parameters:  the array to sort
//                          the size of the array
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayMerge(int array[],int size) {
	time_t startTime, endTime, elapsedTime;
    startTime = clock();
    mergesort(array,0,ARRAY_SIZE);
	endTime = clock();
	elapsedTime = endTime - startTime;
	cout << setw(24) << "Merge sort time " << elapsedTime << endl; 
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
	//for(int i=0;i<size;i++) 
	// cout << array[i] << " ";
	return resp;
}

