#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

float Complex::getReal() const
{
    return real;
}

float Complex::getImaginary() const
{
    return imaginary;
}

// Below: Operator overloading
Complex Complex::operator* (Complex rhs) const
{
    Complex prod;
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