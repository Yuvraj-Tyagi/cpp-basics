#include <iostream>
using namespace std;

// selection sort

int smallest_index(int arr[], int st, int end){
    int s_index = st;
    for (int i=st;i<=end;i++){
        if(arr[i]<arr[s_index]){
            s_index = i;
        }
    }
    return s_index;
}

void swap (int arr[], int index1, int index2){
    int var = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = var;
}

void selection_sort(int arr[], int size){
    for (int i =0;i<size-1;i++){  //n-1 iterations
        swap(arr,i,smallest_index(arr,i,size-1));
    }   
}

void print_arr(int arr[], int size){
    for (int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble_sort(int arr[], int size){
    bool isSwap = false;
    for (int i=0;i<size-1;i++){  // n-1 iterations
        for (int j = 0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
                isSwap = true;                
            }
        }
        if(!isSwap){  // optimization
            return;
        }       
    } 

}

void insertion_sort(int arr[], int size){
    for(int i=1;i<size;i++){
        int curr = arr[i];
        int prev = i-1;

        while (prev>=0 && curr <arr[prev]){
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;  // placing the current in its correct position
    }
}


int main(){
    int arr1[6] = {6,3,4,1,9,8};
    insertion_sort(arr1,6);
    print_arr(arr1,6);
}