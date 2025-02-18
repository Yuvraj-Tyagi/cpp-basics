// print all the unique values in an array
#include <iostream>
using namespace std;

void print_unique_values(int arr[], int size){
    for(int i=0;i<size;i++){
        int count = 0;
        for (int j =0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int nums[10] = {12,34,56,54,12,67,56,34,88,90};
    print_unique_values(nums,10);
}
 
