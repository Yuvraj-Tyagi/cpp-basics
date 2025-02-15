// to find the maximum and minimum number in an array

#include <iostream>
using namespace std;

int max(int arr[],int size){
    int maximum = INT_MIN;
    for (int i=0;i<size;i++){
        if (arr[i]>maximum){
            maximum = arr[i];
        }
    }

    return maximum;
}

int min(int arr[],int size){
    int minimum = INT_MAX;
    for (int i=0;i<size;i++){
        
        if (arr[i]<minimum){
            minimum = arr[i];
        }
    }

    return minimum;
}

int main(){
    int nums[6] = {23,14,54,32,56,24};
    int maximum = max(nums,6);
    int minimum = min(nums,6);
    cout<<"The maximum number is the array is "<<maximum<<" and the minimum number is "<<minimum;
}
