// looping through the elements of an array using a for loop , for each loop and while loop

#include <iostream>
using namespace std;

int main(){
    string cars[5] = {"mercedes","hyundai","honda","mahindra","jaguar"};

    //using for loop

    for(int i = 0;i<=4;i++){
        cout<<cars[i]<<"\n";
    }

    //using a for-each loop

    for(string x:cars){
        cout<<x<<"\n";
    }

    //using a while loop

    int i = 0;
    while(i<=4){
        cout<<cars[i]<<"\n";
        i++;

    }
}
