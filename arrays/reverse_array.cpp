// reversing an array without creating a copy or a new array

#include <iostream>
using namespace std;

void print(int arr[],int size){
    for (int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void arr_rev(int arr[] , int size){
    int st = 0;
    int end = size-1;

    while (st<end){
        int x = arr[st];
        arr[st] = arr[end];
        arr[end] = x;
        st++;
        end--;
    }

    cout<<"The reversed array is: ";
    print(arr,size);
    cout<<endl;
}

int main(){
    int nums_e[6] = {12,32,1,24,67,57};
    int nums_o[5] = {34,35,88,6,98};

    arr_rev(nums_e,6);
    arr_rev(nums_o,5);
}
