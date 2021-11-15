#include <iostream>
#include "Complex.h"

int main() {
    
    Complex c1, c2(1), c3(1,2);

    float x;

    c1 = c2 * c3* c2;

    x =  sqrt(c1.getReal()*c1.getReal()+ c1.getImaginary()*c1.getImaginary());
    
    x = c1.modulus ();

    c1.print();
    
    return 0;

}