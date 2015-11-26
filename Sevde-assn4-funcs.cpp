#include "Sevde-assn4-funcs.h"

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;



//**************************************************************************
//  FUNCTION:  initArray
//  DESCRIP:   init array (allocate memory) for use by program
//  INPUT:     Parameters:  the size of array to create
//  OUTPUT:    Return Value: the allocated array
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
int* initArray(int size) {
    int* array = NULL;
    array = new int[size];
    array[size] = {0};
    
    return array;
}

//**************************************************************************
//  FUNCTION:  dellocArray
//  DESCRIP:   delloc array used by program
//  INPUT:     Parameters:  the array to delloc
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void  dellocArray(int array[]) {
	delete array;
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
   
    bool resp = false;
    int tempVariable1;              //temporary storage for random integer
    int tempVariable2;
    
    //Generates random 100,000 random numbers between 1-30,000 and stores it
    for (int countNums1 = 0; countNums1 < ARRAY_SIZE; countNums1++) {
        tempVariable1 = rand() % END_RANGE + 1;
        array1[countNums1] = tempVariable1;
    }
    
    for (int countNums2 = 0; countNums2 < ARRAY_SIZE; countNums2++) {
        tempVariable2 = array1[countNums2];
        array2[countNums2] = tempVariable2;
    }
    
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

//**************************************************************************
//  FUNCTION:  sortArrayBubble
//  DESCRIP:   function to sort array using bubble sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t  sortArrayBubble(int array[]){
	
    //variable section
    int lastIdx = 0;
    int temp = 0;
    bool listSorted = false;
    time_t startTime, endTime, elapsedTime;
    startTime = clock();
    
    lastIdx = ARRAY_SIZE - 1;
    
    while (listSorted != true) {
        listSorted = true;
        int currentIdx = 0;
        while (currentIdx < lastIdx) {
            while (array[currentIdx] > array[currentIdx + 1]) {
                temp = array[currentIdx];
                array[currentIdx] = array[currentIdx + 1];
                array[currentIdx + 1] = temp;
                listSorted = false;
            }
            currentIdx++;
        }
        lastIdx--;
    }
    
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
	
    cout << "---------------" << endl;
    cout << fixed << setprecision(1) << showpoint;
    
    //CHANGE THESE once we have the string Labels working
    if (sortType1 == 0) {
        cout << setw(21) << "Boubble Sort " << sortTime1
             << " clock ticks on average" << endl;
    }
    else if (sortType1 == 1) {
        cout << setw(21) << "Insertion Sort " << sortTime1
             << " clock ticks on average"<< endl;
    }
    else if (sortType1 == 2) {
        cout << setw(21) << "Merge Sort " << sortTime1
             << " clock ticks on average" << endl;
    }
    else if (sortType1 == 3) {
        cout << setw(21) << "Quick Sort " << sortTime1
             << " clock ticks on average" << endl;
    }
    
    
    if (sortType2 == 0) {
        cout << setw(21) << "Boubble Sort " << sortTime2
        << " clock ticks on average" << endl;
    }
    else if (sortType2 == 1) {
        cout << setw(21) << "Insertion Sort " << sortTime2
        << " clock ticks on average"<< endl;
    }
    else if (sortType2 == 2) {
        cout << setw(21) << "Merge Sort " << sortTime2
        << " clock ticks on average" << endl;
    }
    else if (sortType2 == 3) {
        cout << setw(21) << "Quick Sort " << sortTime2
        << " clock ticks on average" << endl;
    }
    
    
    cout << endl << "Press any key to continue . . ." << endl;
}

