#include <iostream>
#include <vector>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main() {

    int seed, length;
    cin >> seed >> length;
    srand(seed);

    vector<int> v(length);

    // generate vector of random integers
    for (int i = 0; i < v.size(); i++) {
        v[i] = rand() % 100;
    }
    cout << "Initial Values of the List" << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    //generate Linked List of random integers
    LinkedList test;
    LinkedList two;



    for (int i = 0; i < length; i++) {

        test.append(v.at(i));
    }

    insertionSort(v, v.size());


    two = test;

    // binary insertion sort
   //test.InsertionSort(length);

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Printing from the unsorted linkedlist" << endl;

    test.printList();


    cout << endl ;

    test.insertionSortList();
    cout << "Printing from the sorted LinkedList" << endl;

    test.printList();

    // FINISH ME

}