#include <iostream>
#include "MemoryCell.h"

using namespace std;

template <class T>
MemoryCell<T>::MemoryCell(const T& initVal)
    : storedValue(initVal) {}


template <class T>
const T& MemoryCell<T>::read() const
{
    return storedValue;
}


template <class T>
void MemoryCell<T>::write(const T& x)
{
    storedValue = x;
}




int main()
{
    MemoryCell<int> m;
    MemoryCell<float> f;
    MemoryCell<int> m2;

    m.write(5);
    m2.write(6);
    f.write(3.5);

    cout << "Cell content: " << m.read() << endl;
    cout << "Cell content: " << m2.read() << endl;
    cout << "Cell content: " << f.read() << endl;

}