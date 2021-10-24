#include <iostream>
#include "Time.h"
using namespace std;

// Below: Declaring the public method in header file
// :: is an expression that binds the method name with class name
void Time::print () const
{
    cout << *hour << ":" << minute << ":" << second << endl;
}


int main() {

    Time t1, t2(2), t3(21,34), t4(12,25,42);

    t1.print(); 
    t2.print();
    t3.print();
    t4.print(); 


}




