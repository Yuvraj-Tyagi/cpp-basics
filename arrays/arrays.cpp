// Arrays are basically a way to store multiple data in a single variable and you can accessing this data using indices of that data,etc. 
// Arrays are linear data structures stored in contingent (continuous) memeory location.
// We can only store the same type of data in an array.
 
#include <iostream>
using namespace std;

int main(){
    int marks[5] = {23,56,43,72};
    marks[4] = 11;

    for(int i=0;i<=4;i++){
        cout<<marks[i]<<"  ";
    }

    cout<<"the size of this array is"<<" "<<sizeof(marks)/sizeof(marks[0]);

    return 0;
}

// Array indexes go from 0 to size-1
// Array is always automatically passed by reference
// Arrays have a fixed size

