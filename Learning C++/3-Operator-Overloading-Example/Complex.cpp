#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

float Complex::getReal() const
{
    // ? Not really needed
    // I can reach out to private members
}

float Complex::getImaginary() const
{
    // ? Not really needed
    // I can reach out to private members
}

// Below: Operator overloading
Complex Complex::operator* (Complex rhs) const
{
    Complex prod;

    // Reaching out to private variables in the header
    // Instructor indicated that compiler would stop at this point
    // but code works perfectly fine.
    prod.real = (real*rhs.real - imaginary*rhs.imaginary);   
    prod.imaginary = (real*rhs.imaginary + imaginary* rhs.real);

    return prod;
}

float Complex::modulus() const
{
    return sqrt(real*real + imaginary*imaginary);
}

void Complex::print() const
{
    cout << "(" << real << "," << imaginary << ")" << endl;
}



int main()
{

    Complex c1 (1,2);
    Complex c2 (3,4);
    Complex c3 = c1.operator*(c2);
    c3.print();

}