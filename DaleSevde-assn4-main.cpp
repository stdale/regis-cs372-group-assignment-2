//******************************************************************************
//  CODE FILENAME: DaleSevde-assn4-main.cpp
//  DESCRIPTION: This program compares how long it takes to sort a list, using
//               various sorting methods; Bubble Sort, Insertion Sort, Merge
//               Sort and Quick Sort.
//  CLASS/TERM: CS372_X70 2015 Fall 8 week 2
//  DESIGNER: Stewart Dale and Lindsay Sevde
//  FUNCTIONS:
//******************************************************************************
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "DaleSevde-assn4-common.h"
#include "Dale-assn4-funcs.h"
#include "Sevde-assn4-funcs.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//**************************************************************************
//  FUNCTION:  main
//  DESCRIP:   main function of program
//  INPUT:     Parameters:	argc, the number of command line arguments
//                          argv, char[][] of command line arguments
//  OUTPUT:    Return Value: the exit status of the program
//  IMPLEMENTED BY: Stewart 
//**************************************************************************
int main(int argc, char** argv) {
 // variables for the program run
 Menu sortChoice1 = Bubble;
 Menu sortChoice2 = Bubble;
 sortFunction sortF1,sortF2;
 int runs;
 time_t *timeList1,*timeList2;
 int    *array1,*array2;
 bool continueloop = true;
 
 // init rand one time for the entire run
 srand(time(NULL));
 
 // loop until user wants to break
 while(continueloop) {
 	// get the users choice of what sorts to run
 	getInputChoiceSort(sortChoice1,sortChoice2);
  	
  	// get users choice of how many times to run each sort
  	// only if exit not picked
  	if(sortChoice1 != Exit && sortChoice2 != Exit)
      runs = getInputChoiceInt(MIN_RUNS,MAX_RUNS);

 	if((sortChoice1 != Exit) && (sortChoice2 != Exit)) {
	
 	  
      // main loop where we actually do stuff
	  // first set our pointer functions
	  switch(sortChoice1) {
	  	case Bubble:
	  		sortF1 = &sortArrayBubble;
	  		break;
	  	case Insertion:
	  		sortF1 = &sortArrayInsertion;
	  		break;
	  	case Merge:
	  		sortF1 = &sortArrayMerge;
	  		break;
	  	case Quick:
	  		sortF1 = &sortArrayQuick;
	  		break;
	  }
	  switch(sortChoice2) {
	  	case Bubble:
	  		sortF2 = &sortArrayBubble;
	  		break;
	  	case Insertion:
	  		sortF2 = &sortArrayInsertion;
	  		break;
	  	case Merge:
	  		sortF2 = &sortArrayMerge;
	  		break;
	  	case Quick:
	  		sortF2 = &sortArrayQuick;
	  		break;
	  }
	  // this is an array of time_t used to track avg time runs
      timeList1  = new time_t[runs];
      timeList2  = new time_t[runs];
      
      // now run each sort X times
      for(int i = 0; i < runs; i++) {
      	// create the arraty
		array1 = initArray(ARRAY_SIZE);
      	array2 = initArray(ARRAY_SIZE);
      	// fill it
		fillArrays(array1,array2);
      	
        cout << endl << "Starting sort #" << i + 1 << endl;
        // run each sort function and get the time it took to run
		timeList1[i] = (*sortF1)(array1,ARRAY_SIZE);
      	timeList2[i] = (*sortF2)(array2,ARRAY_SIZE);
      	
      	// verify the sorts
      	bool verified1 = verifySort(array1,ARRAY_SIZE),
      	     verified2 = verifySort(array2,ARRAY_SIZE);
      	if( verified1 && verified2) {
      	  cout << setw(24) << "Sorts validated.";
		}else{
			if(!verified1) {
				cout << "Validation of " << Labels[sortChoice1] << " failed!" << endl; 
			}else{
				cout << "Validation of " << Labels[sortChoice2] << " failed!" << endl; 
			}
		}
      	// clean up the arrays we cerate before
      	dellocArray(array1);
      	dellocArray(array2);
	  }
	  // display the results
	  displayResults(sortChoice1,timeList1,sortChoice2,timeList2, runs);
	  
	  // clean up the arrays used to track times
	  delete timeList1;
	  delete timeList2;
	  
	}else{
	  // user picked Exit, so exit loop
	  continueloop = false;
	}
 }
 return 0;
}

