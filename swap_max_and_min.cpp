// to swap the maximum and the minimum number of an array

// to find the maximum and minimum number in an array

#include <iostream>
#include <climits>

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

int max_index(int arr[], int size){
    int maximum = max(arr,size);

    for(int i= 0;i<size;i++){
        if(maximum == arr[i]){
            return i;
        }
    }
    return -1;
}

int min_index(int arr[], int size){
    int minimum = min(arr,size);

    for(int i= 0;i<size;i++){
        if(minimum == arr[i]){
            return i;
        }
    }
    return -1;
}


void swap_max_min(int arr[], int size){
    int maximum = max_index(arr,size);
    int minimum = min_index(arr,size);
    
    int x= arr[maximum];
    arr[maximum] = arr[minimum];
    arr[minimum] = x;
    cout<<"The array with swapped max and min numbers is"<<endl;

    for(int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int nums[6] = {12,45,36,74,89,76};
    swap_max_min(nums,6);
}
