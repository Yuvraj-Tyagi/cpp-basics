// to calculate the sum and product of all numbers in an array
#include <iostream>
using namespace std;

int add(int arr[], int size){
    int sum = 0;
    for(int i =0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}

int multiply(int arr[], int size){
    int product = 1;
    for(int i =0;i<size;i++){
        product *= arr[i];
    }
    return product;
}

int main(){
    int nums[5] = {1,3,4,2,5};
    int sum = add(nums,5);
    int product = multiply(nums,5);
    cout<<"The sum of the numbers in the array is "<<sum<<" and the product is "<<product;
}

