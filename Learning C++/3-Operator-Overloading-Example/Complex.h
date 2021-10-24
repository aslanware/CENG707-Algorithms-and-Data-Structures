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

        // Public methods
        Complex operator* (Complex rhs) const;
        float modulus() const;
        void print() const;
        
        // Accesor methods
        float getReal() const;
        float getImaginary() const;


};

#endif