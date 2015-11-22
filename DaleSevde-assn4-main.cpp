#include <iostream>
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
 Menu sortChoice1 = Bubble;
 Menu sortChoice2 = Bubble;
 sortFunction sortF1,sortF2;
 int runs;
 time_t *timeList1,*timeList2;
 int    *array1,*array2;
 bool continueloop = true;
 while(continueloop) {
 	getInputChoiceSort(sortChoice1,sortChoice2);
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
      timeList1  = new time_t[runs];
      timeList2  = new time_t[runs];
      for(int i = 0;i<runs;i++) {
      	array1 = initArray(ARRAY_SIZE);
      	array2 = initArray(ARRAY_SIZE);
      	fillArrays(array1,array2);
      	timeList1[i] = (*sortF1)(array1);
      	timeList2[i] = (*sortF2)(array2);
      	verifySort(array1,ARRAY_SIZE);
      	verifySort(array2,ARRAY_SIZE);
      	dellocArray(array1);
      	dellocArray(array2);
	  }
	  displayResults(sortChoice1,timeList1,sortChoice2,timeList2);
	  delete timeList1;
	  delete timeList2;
	}else{
	  continueloop = false;
	}
 }
 return 0;
}
