#ifndef MYCOMMON_H
#define MYCOMMON_H

#include <string>
#include <climits>


using namespace std;



#define MIN_RUNS 1
#define MAX_RUNS INT_MAX
#define ARRAY_SIZE 100000

/*
string Labels[] = {
 "Bubble",
 "Insertion",
 "Merge",
 "Quick"
};
*/

enum Menu {
 Bubble = 0,
 Insertion,
 Merge,
 Quick,
 Exit
};

typedef time_t (*sortFunction)(int array[]);  // prototype for function pointer to sort function

#endif
