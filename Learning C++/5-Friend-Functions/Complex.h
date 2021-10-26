#ifndef _Complex_H
#define _Complex_H

class Complex
{
    
    // -> Private variables
    float real, imaginary;

    public:
        // Constructor
        Complex(float ireal = 0 , float iimaginary = 0)
            : real(ireal), imaginary(iimaginary) {}

        // -> Public methods
        // How operator * works is c1.operator*(c2)
        // c1-> Left hand side, c2-> Right hand side (rhs)
        Complex operator* (Complex rhs) const;

        // Another overloading -> Complex*float
        Complex operator* (Float k) const;

        float modulus() const;
        void print() const;
        
        // Accesor methods
        float getReal() const;
        float getImaginary() const;


};

#endif