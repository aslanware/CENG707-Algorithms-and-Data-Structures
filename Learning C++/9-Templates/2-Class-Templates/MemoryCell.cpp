#include "MemoryCell.h"

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

