// Linked list implementation in C++
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main()
{
    Node* Start;

    //Assigning the node with null value.

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
      
   //Creteing node pointer with new.
    head = new Node();
    second = new Node();
    third = new Node();

    head ->data = 1;       //Initialising the node with value.
    head ->next = second;  //Pointing the node to next node.

    second ->data = 2;
    second ->next = third;

    third ->data = 3;
    third ->next = NULL;

    Start = head;
    while (Start != NULL)
    {
        cout<<"The list is"<<" "<<Start->data<<" "<<endl;
         Start = Start->next;
    }

   

    return 0;
}