//
// Created by Raniery Costa Mendes on 10/28/19.
//
#include "Node.h"

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H


class LinkedList {
public:
    LinkedList();
    LinkedList(const LinkedList &origList);
    ~LinkedList();
    int getValue () const;
    void setNext (Node* n);
    void insertionAfter (Node* nextnode);
     LinkedList& operator =(LinkedList& rhs);
    void append( int item );
    void InsertionSort(int size);
    void printList ()const;
    void insertAtEnd(int val);

private:
    Node* head;
    int v;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H
