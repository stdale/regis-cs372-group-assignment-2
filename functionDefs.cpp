

/*
Lindsay:
time_t sortArrayBubble(int[] array)      // i think these need to be references so they can be changed
time_t sortArrayQuick(int[] array)       // i think these need to be references so they can be changed

int[]  initArray(int size) // call new
void   dellocArray(int[])  // call delete
bool   fillArrays(int[] array1,int[] array2) // will also call srand once, calls fillArray(array1,array2)
void   displayResults(Menu sortType1, time_t sortTime1, Menu sortType2, time_t sortTime2)

Stewart:
time_t sortArrayInsertion(int[] array)   // i think these need to be references so they can be changed
time_t sortArrayMerge(int[] array)       // i think these need to be references so they can be changed
int    getInputChoiceInt(int min, int max)
void   getInputChoiceSort(Menu& choice1,Menu& choice2) 
bool   verifySort(int[] array)
int    main(int argc,char** argv)

*/

static char** Labels = {
 “Bubble”,
 “Insertion”,
 “Merge”,
 “Quick”
};

enum Menu {
 Bubble = 0,
 Insertion,
 Merge,
 Quick,
 Exit
}

//**************************************************************************
//  FUNCTION:  main
//  DESCRIP:   main function of program
//  INPUT:     Parameters:	argc, the number of command line arguments
//                          argv, char[][] of command line arguments
//  OUTPUT:    Return Value: the exit status of the program
//  IMPLEMENTED BY: Stewart 
//**************************************************************************
int main(int argc,char** argv)


//**************************************************************************
//  FUNCTION:  getInputChoiceSort
//  DESCRIP:   get the input from user of which sort algo's to use, or exit
//  INPUT:     Parameters:	references to output params
//  OUTPUT:    Return Value: the choices picked by user
//  IMPLEMENTED BY: Stewart
//**************************************************************************
void  getInputChoiceSort(Menu& choice1,Menu& choice2)
//**************************************************************************
//  FUNCTION:  getInputChoiceInt
//  DESCRIP:   get the input from user of how many times to run sort
//  INPUT:     Parameters:	min, the min acceptable value
//                          max, the max acceptable value
//  OUTPUT:    Return Value: the choices picked by user
//  IMPLEMENTED BY: Stewart
//**************************************************************************
int   getInputChoiceInt(int min, int max)


//**************************************************************************
//  FUNCTION:  initArray
//  DESCRIP:   init array (allocate memory) for use by program
//  INPUT:     Parameters:  the size of array to create
//  OUTPUT:    Return Value: the allocated array
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
int[] initArray(int size)

//**************************************************************************
//  FUNCTION:  dellocArray
//  DESCRIP:   delloc array used by program
//  INPUT:     Parameters:  the array to delloc
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void  dellocArray(int[])

//**************************************************************************
//  FUNCTION:  fillArrays
//  DESCRIP:   fills provide arrays with values between 1 and 30,000
//             wrapper function that calls srand before filling arrays
//  INPUT:     Parameters:  the arrays to fill
//  OUTPUT:    Return Value: if it was succesful or not
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
bool  fillArrays(int[] array1,int[] array2) // will also call srand once

//**************************************************************************
//  FUNCTION:  fillArray
//  DESCRIP:   fills provide array with values between 1 and 30,000
//  INPUT:     Parameters:  the array to fill
//  OUTPUT:    Return Value: if it was succesful or not
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
bool  fillArray(int[] array)

// first two statements of function
// int startTime, endTime, elapsedTime;
// startTime = clock();
// last three statements
// endTime = clock();
// elapsedTime = endTime - startTime;
// cout << "Bubble sort time " << elapsedTime << endl;
// return elaposedTime;

typedef time_t (*sortFunction)(int[] array)  // prototype for function pointer to sort function

//**************************************************************************
//  FUNCTION:  sortArrayBubble
//  DESCRIP:   function to sort array using bubble sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t  sortArrayBubble(int[] array)      // i think these need to be references so they can be changed

//**************************************************************************
//  FUNCTION:  sortArrayInsertion
//  DESCRIP:   function to sort array using insertion sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayInsertion(int[] array) // i think these need to be references so they can be changed

//**************************************************************************
//  FUNCTION:  sortArrayMerge
//  DESCRIP:   function to sort array using merge sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Stewart
//**************************************************************************
time_t  sortArrayMerge(int[] array)  // i think these need to be references so they can be changed

//**************************************************************************
//  FUNCTION:  sortArrayQuick
//  DESCRIP:   function to sort array using quick sort
//  INPUT:     Parameters:  the array to sort
//  OUTPUT:    Return Value: time taken to 
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
time_t  sortArrayQuick(int[] array)  // i think these need to be references so they can be changed


//**************************************************************************
//  FUNCTION:  verifySort
//  DESCRIP:   function to verify array is sorted
//  INPUT:     Parameters:  the array to verify
//  OUTPUT:    Return Value: if it is correctly sorted
//  IMPLEMENTED BY: Stewart
//**************************************************************************
bool    verifySort(int array[],int size)

//**************************************************************************
//  FUNCTION:  displayResults
//  DESCRIP:   function to display results of two sorts
//  INPUT:     Parameters:  the type of sort
//                          time taken to sort
//  OUTPUT:    Return Value: n/a
//  IMPLEMENTED BY: Lindsay
//**************************************************************************
void    displayResults(Menu sortType1, time_t sortTime1[], Menu sortType2, time_t sortTime2[])

