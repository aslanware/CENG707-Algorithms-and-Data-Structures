#include <iostream>
#include "Node.cpp"

using namespace std;
template <class T>
class List {
private:

    Node<T>* dummyHead;

public:
    List() {
        dummyHead = new Node<T>(T(), NULL);
    }

    bool isEmpty() const;
    Node<T>* zeroth() const;
    Node<T>* first() const;
    void insert (const T& data, Node<T>* p);
    Node<T>* find (const T& data);
    Node<T>* findPrevious(const T& data);
    void remove(const T& data);
    void print() const;
    void makeEmpty();

    ~List() {
        delete dummyHead;
    }

    List<T>& operator=(const List<T>& rhs);
    
    // copy constructor
    List(const List<T>& rhs) {
        dummyHead = new Node<T>(T(), NULL);
        *this = rhs;
    }

};

template <class T>
Node<T>* List<T>::zeroth() const {

    return dummyHead;

}

template <class T>
Node<T>* List<T>::first() const {

    return dummyHead->next;

}

template <class T>
bool List<T>::isEmpty () const {

    return first() == NULL;

}

template <class T>
void List<T>::insert (const T& data, Node<T>* p) {

    Node<T>* newNode = new Node<T> (data, p->next);
    p->next = newNode;

}

template <class T>
Node<T>* List<T>::find (const T& data) {

    Node<T>* p = first();

    while (p) {
        if (p->element == data) {
            return p;
        }
        p = p->next;
    }
    
    return NULL;

}

template <class T>
Node<T>* List<T>::findPrevious(const T& data) {
    
    Node<T>* p = zeroth();

    while (p->next) {
        if (p->next->element == data) {
            return p;
        }
        p = p->next;
    }

    return NULL;
}

template <class T>
void List<T>::remove (const T& data) {

    Node<T>* p = findPrevious(data);

    if (p) {
        Node<T>* tmp = p->next;
        p->next = tmp->next;

        delete tmp;
    }

}

template <class T>
void List<T>::print() const {

    Node<T>* p = first();

    while (p) {
        cout << p->element << endl;
        p = p->next;
    }

}

template <class T>
void List<T>::makeEmpty() {

    while (!isEmpty()) {
        remove (first()->element);
    } 

}

template <class T>
List<T>& List<T>::operator=(const List<T>& rhs) {

    if (this != &rhs) {
        makeEmpty();

        const Node<T>* r = rhs.first();
        Node<T>* p = zeroth();
        
        while (r) {
            insert (r->element, p);
            r = r->next;
            p = p->next;
        }
    }
    return *this;

}

