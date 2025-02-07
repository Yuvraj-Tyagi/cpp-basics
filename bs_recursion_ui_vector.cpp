#include <iostream>
#include <vector>
using namespace std;

vector<int> vector_maker(){
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;

    vector<int> u_vector;


    int i;
    cout<<"Enter the numbers to be added to the vector: ";

    while(true){
        cin>>i;
        u_vector.push_back(i);
        cout<<"\n"; 

        if(u_vector.size() == size){
            break;
        }
    }

    cout<<"The vector you have enetered is: "<<"\n";
    for(int j: u_vector){
        cout<<j<<" ";
    }


    return u_vector;
    
}

int b_search(vector<int> ud_vector,int start,int end,int target){

    if (start<=end){

        int mid = start + (end - start) / 2;
    
        if (target<ud_vector[mid]){
         return b_search(ud_vector,start,mid-1,target);
        }

        else if(target>ud_vector[mid]){
            return b_search(ud_vector,mid+1,end,target);   
        }

        else if (target == ud_vector[mid]){
            return mid;
        }

    }

    else{
        return -1;
    }
    
}

int main(){
    vector<int> g_vector = vector_maker();
    int size = g_vector.size();

    int u_target;
    cout<<"Enter a number to search in the vector: ";
    cin>>u_target;

    int index = b_search(g_vector,0,size-1,u_target);
    cout<<index;
}