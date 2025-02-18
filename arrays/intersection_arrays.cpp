// print intersection of two array

#include <iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2){
    for (int i = 0;i<size1;i++){
        int count = 0;
        for (int j =0; j<size2;j++){
            if (arr1[i]==arr2[j]){
                count++;
            }

        }
        if (count>0){
            cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int nums1[5] = {2,3,4,5,6};
    int nums2[6] = {3,4,2,9,10,11};
    intersection(nums1,5,nums2,6);
}