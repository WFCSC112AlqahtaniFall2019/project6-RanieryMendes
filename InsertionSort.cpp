#include <iostream>
#include <vector>
#include "BinaryInsertionSort.h"
#include "Node.h"
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
    //generate Linked List of random integers
    for (int i = 0; i < v.size(); i++){
        Node* head =  new Node(v.at(i));

    }

    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    //using the linkedlist



    // FINISH ME

}