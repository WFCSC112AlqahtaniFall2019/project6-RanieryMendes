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

    head = new Node(origList.head->value, 0);
    Node *cursor = head;
    cursor = cursor->next;
    Node *previous = head;
    Node *track = origList.head;

    while (track->next != nullptr) {
        this->append(track->next->value);
        track = track->next;
    }

}



LinkedList& LinkedList ::operator=( LinkedList& rhs) {

    cout << "Copy Assignment Operator\n";

    LinkedList tmp (rhs);

    swap (this->head, tmp.head);

    return *this;


}





LinkedList ::~LinkedList() {
    cout << "Destructor called." << endl;
    // pointer which always points to the next node within our list
    Node *prev;
    Node* cursor = head;

    // keep going until header does not equal NULL
    while(cursor != nullptr){
        // advance to pointer to point to next node
        prev = cursor->next;
        // delete node that header is pointing to
        delete cursor;
        // advance header to point to the next node
        cursor = cursor->next;
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

void LinkedList:: printList() const{

    Node *cursor = head;

    if (! cursor ) {
        cout << " empty list " << endl;
    }

    else {

        while (cursor){
            cout << cursor->value  << endl;
            cursor = cursor -> next ;
        }
    }
    cursor = nullptr;
}

// Function to sort Linked List


void  LinkedList  :: insertionSortList( ) {

    // create a new node to iterate through the list
    Node *GOD = new Node (0,head);
    // set GOD pointer to point to the head of the (unsorted) linked list
    //Pointer God is the sorted part of the list
    //GOD->next = head;

    Node *previous = GOD, *current = head;

// while (outter) loop to iterate through the
    while (current != nullptr) {
        // if statement for 2 conditions
        // 1st if current next is not null and 2nd if the next node's value is larger than the current node's value
        // if both conditions are met, the if statement executes
        if ((current->next) && (current->next->value < current->value)) {

            //using the conditions from the if statement above set a while loop to iterate through the sorted list until
            // it reaches its right location. It occurs either when previous->next is null which means it will become the last node of the linked list
            // because it is the larger value or because it find the location between its prior lower and next higher values.
            while ((previous->next) && (previous->next->value < current->next->value)) {

                previous = previous->next;
            }
            // allocate a temp node to store the
            Node *temp = previous->next;
            // makes the previous pointer stops pointing to its next pointer (current), so it starts to point to current next. So
            previous->next = current->next;
            current->next = current->next->next;

            previous->next->next = temp;
            // sets the previous as GOD to
            previous = head; // sets
        }
            // if the node did not find the right location keep iterating
        else {
            current = current->next;
        }
    }



}

