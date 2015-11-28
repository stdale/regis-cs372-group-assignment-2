#ifndef MYCOMMON_H
#define MYCOMMON_H

#include <string>
#include <climits>


using namespace std;



#define MIN_RUNS 1
#define MAX_RUNS INT_MAX
#define ARRAY_SIZE 100000
#define END_RANGE 30000

const int BY_TWO = 2;

enum Menu {
 Bubble = 0,
 Insertion,
 Merge,
 Quick,
 Exit
};

const string Labels[] = {
      "Bubble",
      "Insertion",
      "Merge",
      "Quick"
};

typedef time_t (*sortFunction)(int array[],int size);  // prototype for function pointer to sort function

#endif
