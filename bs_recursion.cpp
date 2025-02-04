#include <iostream>
using namespace std;

int b_search(int arr[],int start,int end,int target){

    if (start<=end){
        int mid = start + (end - start) / 2;
    
        if (target<arr[mid]){
         return b_search(arr,start,mid-1,target);
        }

        else if(target>arr[mid]){
            return b_search(arr,mid+1,end,target);   
        }

        else if (target == arr[mid]){
            return mid;
        }

    }

    else{
        return -1;
    }
    
}

int main(){
    int array[10] = {12,23,31,42,57,65,67,89,92,99};

    int u_target;
    cout<<"enter the number: ";
    cin>>u_target;

    int index = b_search(array,0,9,u_target);

    cout<<index;

}