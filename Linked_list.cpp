#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;


void insert(int data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void traverse() {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void remove(int data) {
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        return;
    }

    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    delete current;
}

int main()
{
 
 for  (int i = 0; i < 30; i++)
 {
 insert(i);
 }

 for(int i = 0; i<30; i++)
 {
   if(i%2==1)
   {
    remove(i);
   } 
 }

 insert(17);
 insert(44);
 remove(17);
 remove(12);
 
 traverse();

 

    return 0;
}