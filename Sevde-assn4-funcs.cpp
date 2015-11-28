//******************************************************************************
//  FILE NAME: Sevde-assn4-funcs.cpp
//  Description: This file contains ADT function definitions for
//               DaleSevde-assn4-main.cpp
//  Functions: initArray - init array (allocate memory) for use by program
//             dellocArray - delloc array used by program
//             fillArrays -
//             sortArrayBubble - function to sort array using bubble sort
//             sortArrayQuick - function to call quick_sort and track time to
//                           sort array
//             quick_Sort - function to sort array using quick sort
//             displayResults - function to display results of two sorts
//******************************************************************************

#include "Sevde-assn4-funcs.h"

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cstdlib>

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
void dellocArray(int array[]) {
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
bool fillArrays(int array1[],int array2[]) {
    
    bool resp = false;
    int tempVariable1;                  //tempory storage to fill array
    int tempVariable2;                  //tempory storage to fill array
    
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
//  FUNCTION:  sortArrayBubble
//  DESCRIP:   function to sort array using bubble sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t sortArrayBubble(int array[], int size){
    
    //variable section
    int lastIdx = size - 1;                  //storage for last index in array
    int temp;                                //tempory storage used for swaping values
    bool listSorted = false;                 //validates if list has been sorted or not
    time_t startTime, endTime, elapsedTime;
    startTime = clock();
    
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
//  DESCRIP:   function to call quick_sort and track time to sort array
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t sortArrayQuick(int array[], int size) {
    
    //variable section
    int lastIdx = size - 1;                  //storage for last index in array
    time_t startTime, endTime, elapsedTime;
    startTime = clock();
    
    quick_Sort(array, 0, lastIdx);
    
    endTime = clock();
    elapsedTime = endTime - startTime;
    cout << "Quick sort time " << elapsedTime << endl;
    return elapsedTime;
}

//**************************************************************************
//  FUNCTION:  quick_Sort
//  DESCRIP:   function to sort array using quick sort
//  INPUT:     Parameters:  the array to sort, left index and right index of
//                          array
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void quick_Sort(int array[], int left, int right) {
    
    //variable section
    int pivot = array[(left + right) / BY_TWO];  //storage for pivot
    int temp;                                    //tempory storage used for swaping values
    int tempLeft = left;                         //tempory storage for left index
    int tempRight = right;                       //tempory storage for right index
    
    while (tempLeft <= tempRight) {
        while (array[tempLeft] < pivot) {
            tempLeft++;
        }
        while (array[tempRight] > pivot) {
            tempRight--;
        }
        
        if (tempLeft <= tempRight) {
            temp = array[tempLeft];
            array[tempLeft] = array[tempRight];
            array[tempRight] = temp;
            tempLeft++;
            tempRight--;
        }
    }
    
    if (left < tempRight) {
        quick_Sort(array, left, tempRight);
    }
    if (tempLeft < right) {
        quick_Sort(array, tempLeft, right);
    }
}

//**************************************************************************
//  FUNCTION:  displayResults
//  DESCRIP:   function to display results of two sorts
//  INPUT:     Parameters:  the type of sort
//                          time taken to sort
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void displayResults(Menu sortType1, time_t sortTime1[], Menu sortType2,
                    time_t sortTime2[], int numOfRuns) {
    
    //variable section
    double averageTime1;
    double averageTime2;
    double sum1;
    double sum2;
    
    for (int num = 0; num < numOfRuns; num++) {
        sum1 += sortTime1[num];
    }
    averageTime1 = sum1 / numOfRuns;
    
    for (int num = 0; num < numOfRuns; num++) {
        sum2 += sortTime2[num];
    }
    averageTime2 = sum2 / numOfRuns;
    
    cout << "---------------" << endl;
    cout << setprecision(1) << showpoint;
    
    cout << setw(15) << fixed << Labels[sortType1] << " Sort" << setw(15)
    << averageTime1 << " clock ticks on average";
    cout << endl << setw(15) << fixed << Labels[sortType2] << " Sort" << setw(15)
    << averageTime2 << " clock ticks on average";
    cout << endl << endl << "Press any key to continue . . ." << endl << endl;
}

