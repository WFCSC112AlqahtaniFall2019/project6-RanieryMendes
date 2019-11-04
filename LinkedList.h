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
    LinkedList& operator =(LinkedList& rhs);
    void append( int item );
    void   insertionSortList( );
    void printList ()const;

private:
    Node* head;
    int v;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H
