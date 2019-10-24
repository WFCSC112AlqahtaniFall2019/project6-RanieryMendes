#ifndef NODE_H
#define NODE_H

class Node {
public:
    // Node constructor
    Node(int v = 0, Node* n = nullptr)
    {
        value = v;
        next = n;
    }
    friend class LinkedList;
private:

    int value;
    Node* next;

};

class LinkedList {
public:
    LinkedList();
    LinkedList(const LinkedList &origList);
    ~LinkedList();
    const LinkedList &operator = (const LinkedList &tmp);
    void append( int item );
    void InsertionSort();
    void populate (int rValue);

private:
    Node* head;

};

LinkedList ::LinkedList() {
//if(next){}
}

// to populate the array
void LinkedList::populate(int rValue) {

}

void LinkedList :: append( int item ) {

    if (head == nullptr) {
        head = new Node(item);
    } else {
        Node *cursor = head;
        while (cursor->next != nullptr) {
            cursor = cursor->next;
        }

        cursor->next = new Node(item);
    }
}

void LinkedList ::InsertionSort() {


}



#endif //NODE_H