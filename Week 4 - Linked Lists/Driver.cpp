#include <iostream>
#include "LinkedListWithDummyHead.cpp"

using namespace std;

int main() {

    List<int> list;

    list.insert(0, list.zeroth());
    
    Node<int>*p = list.first();

    for (int i = 1; i <= 10; ++i) {
        list.insert(i,p);
        p = p->next;
    }

    cout << "printing original list" << endl;
    list.print();

    list.remove(4);
    list.remove(8);

    for (int i = 0; i <= 10; ++i) {
        if (i % 2 == 0) {
            if (list.find(i) == NULL) {
                cout << "Could not find element" << endl;
            }
            else {
                cout << "Found element " << i << endl;
            }
        }
    }

    cout << "------list2------" << endl;

    List<int> list2;

    list2 = list;

    list2.print();

    cout << "------list3------" << endl;


    List<int> list3(list2);

    list3.print();

    int x;
    cin >> x;

}