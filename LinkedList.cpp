//
// Created by Raniery Costa Mendes on 10/28/19.
//
#include "LinkedList.h"
#include "Node.h"
#include <string>
#include <iostream>
using namespace std;

LinkedList :: LinkedList() {

    cout << "Constructor called" << endl;
    head = nullptr;
    v = 0;

}


LinkedList::LinkedList(const LinkedList &origList) {

    {
        this->head = 0;               // calling list head
        Node *tempHead = origList.head;  /*For temprory store of head of link list*/
        while (tempHead != 0) {
            this->insertAtEnd(tempHead->value);
            tempHead = tempHead->next;
        }
    }
}
void LinkedList :: insertAtEnd(int val){
    {
        Node* temp = new Node;
        temp->value = val;
        temp->next = 0;
        Node* curr = this->head;
        if (curr != 0)
        {
            while (curr->next != 0)
            {
                curr = curr->next;
            }
            curr->next = temp;
        }
        else
        {
            this->head = temp;
        }
    }
/*
    head = new Node (origList.head->value, nullptr);
    Node* traceNewList = head;

    // trace original list
    Node* cursor = origList.head;
    Node* realCursor = cursor->next;

    while (cursor->next != nullptr){
        traceNewList->next = new Node(realCursor->value, traceNewList);
        cursor = cursor->next;

    }
*/

/*
    head = new Node(origList.head->value, nullptr);
   // LinkedList test;


    Node* y = origList.head;
    Node* w = origList.head->next;


    Node* cursor = head;

    // trace the new list
    while (y->next != nullptr){
        cursor->next = new Node (head->value, cursor->next);
        head++;
        cursor = cursor->next;
        cout << cursor->value << endl;
        w = w-> next;
       y++;


    }*/

    //*this = test;
}

/*
    Node* trace = origList.head;





    Node* j = new Node;
    j = origList.head->next;
    trace->next = j;
    Node *tmp = new Node;
    Node* cursor2 = tmp;
    tmp = head->next;

    while (j->next!= nullptr) {

cout << "Locked in the Copy Constructor while loop" << endl;

     cursor-> next = new Node (trace->next->value);
     j = j-> next;


     // cursor->next;
      //cursor2->next;


     // cout << v <<  "\n";

     // cout << "new v: "<< tmp->value <<  "\n";
     // tmp = tmp->next;

     // this->head = tmp;
     // j->next;
    }
*/


 LinkedList& LinkedList ::operator=( LinkedList& rhs) {

    cout << "Copy Assignment Operator\n";

    cout<< "kdkd" << endl;
    Node* cursor = head;
    LinkedList tmp(rhs);
    cursor = rhs.head;

    while(cursor->next!=nullptr) {

        cout << " while loop LINKEDLIST" << endl;
        //v = tmp.v;


        swap(v, tmp.v); //built-in swap
       cursor =  cursor->next;
    }

    return *this;


}

void LinkedList::setNext(Node *n) {
     head = n;
}

int LinkedList::getValue() const {
    return v;
}


LinkedList ::~LinkedList() {
cout << "Destructor called." << endl;
    // pointer which always points to the next node within our list
    Node *next;
    // keep going until header does not equal NULL
    while(head != NULL){
        // advance to pointer to point to next node
        next = head->next;
        // delete node that header is pointing to
        delete head;
        // advance header to point to the next node
        head = next;
    }
}



void LinkedList :: append( int item ) {

    //case it is inserting to an empty list
    if (head == nullptr) {
        head = new Node(item);
    }

    //insert at the head or after it

    else {
        Node *curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }

        curr ->next = new Node (item);

    }
}

void LinkedList ::insertionAfter(Node *nextnode) {

 Node* cursor = head;
 Node* tmp;
 cursor = cursor->next;
 cursor = nextnode;
 nextnode->next;



}



void LinkedList:: printList() const{

Node *cursor = head;

if (! cursor ) {
    cout << " empty list " << endl;
}

else {

    while ( cursor ){
        cout << cursor->value  << endl;
        cursor = cursor -> next ;
            }
    }
    cursor = nullptr;
}


// sort the linked list
void LinkedList ::InsertionSort( int size) {

   // for loop  that makes the head iterates through the whole linked list sorting it
    for (int i = 0; i < size; ++i) {


        Node *cursor = head; // cursor to manage iteration through the linked list

       // iterate the current head through the whole linked list. It will changes as soon as
       // the while loop finishes and the for loop iterates
        while (cursor->next != nullptr ) {


            Node *previous = cursor->next;

            //compare values in the nodes
            if (cursor->value > previous->value) {


                // swaping the position of nodes in order to sort list
                Node *tmp;
                tmp = previous;
                cursor = tmp;
                previous = cursor;

            }

            cursor->next; // move to next node



        }
    }
}


