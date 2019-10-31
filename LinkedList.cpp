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

    cout << "Copy Constructor\n";

    head = new Node (origList.head->value, nullptr);
    Node* traceNewList = head;

    // trace original list
    Node* cursor = origList.head;
    Node* realCursor = cursor->next;

    while (cursor->next != nullptr){
        traceNewList->next = new Node(realCursor->value, traceNewList);
        cursor = cursor->next;

    }


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

    while(cursor!=nullptr) {

        cout << " while loop LINKEDLIST" << endl;
        //v = tmp.v;

        swap(v, tmp.v); //built-in swap
    }

    return *this;


}

void LinkedList::setNext(Node *n) {
     head = n;
}

int LinkedList::getValue() const {
    return v;
}
/*

LinkedList ::~LinkedList() {
cout << "Destructor called." << endl;

delete head->next;
 //Node* post;
 //post = head;

    while (post->next != nullptr) {
        Node* fordel = post;
        post = post->next; //secure it is not going to delete the whole linked list
        delete fordel;

    }

  // head = nullptr;

  } */

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
\

void LinkedList ::InsertionSort( int size) {


    for (int i = 0; i < size; ++i) {

        Node *cursor = head;
        cout << "Within the for loop of Insertion Sort N: " << i << endl;

        while (cursor != nullptr ) {
            cout << "here" << endl;

            Node *previous = cursor;

            if (cursor->value > previous->value) {
                cout << "Im swaping" << endl;
                Node *tmp;
                tmp = previous;
                cursor = tmp;
                previous = cursor;

            }

            cursor->next;

            if (cursor == nullptr){

            }


        }
    }
}


