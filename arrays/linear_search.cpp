#include <iostream>
using namespace std;

void l_search(int arr[], int size, int target){
    int x = 0;

    for(int i =0;i<size;i++){
        if (arr[i] == target){
            cout<<i<<" ";
        }
        else{x++;}
    }

    if (x==size){
        cout<<-1;
    }
}

int main(){
    int nums[] = {12,13,223,4,21,4,56,2353};
    int size = 8;
    l_search(nums,size,1555);
    return 0;
}
