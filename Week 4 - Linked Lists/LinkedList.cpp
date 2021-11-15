#include "Node.cpp"

template <class T>
class List {
private:

    Node<T>* head;

public:

    List()
        : head(NULL) {}

    bool isEmpty() const;
    Node<T>* first();
    void insert (const T& data, Node<T>* p);

};

template <class T>
bool List<T>::isEmpty () const {

    return head == NULL;

}

template <class T>
Node<T>* List<T>::first () {

    return head;

}

template <class T>
void List<T>::insert (const T& data, Node<T>* p) {

    if (p != NULL) {
        Node<T>* newNode = new Node<T> (data, p->next);
        p->next = newNode;
    }

    // we have to change head pointer if 
    // we are going to insert the Node 
    // to the beginning of the linkedlist
    // so it is better to use a dummyhead.
    
    else {
        Node<T>* newNode = new Node<T> (data, head);
        head = newNode;
    }

}




