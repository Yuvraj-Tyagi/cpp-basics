#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *head = NULL;

void insert_node1(int i) {  // Insert at the beginning
    node *new_node1 = new node;
    new_node1->data = i;
    new_node1->next = head;
    head = new_node1;
}

 
void display() {  // Display the linked list
    node *p = head;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}


int main(){
    while (true){
        int input;
        cout<<"Enter 0 to add a number to the list and 2 to display the linked list: ";
        cin>>input;
        
        if(input == 0){
            int nodeb;
            cout<<"Enter a number to add to the linked list: ";
            cin>>nodeb;

            insert_node1(nodeb);
        }

        else if(input==2){
            display();
            break;
        }
        
        else{
            cout<<"Invalid Input"<<"\n";
        }


    }
}
