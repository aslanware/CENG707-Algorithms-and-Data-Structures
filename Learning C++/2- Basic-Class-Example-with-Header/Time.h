#ifndef _Time_H 
#define _Time_H

// Above: If method to declare the header only once

#include <iostream>
using namespace std; 

class Time {

    public:

        // Constructor
        Time (int ihour=0, int iminute=0, int isecond=0)
           // : hour(ihour), minute(iminute), second(isecond) {}
           // Above: Ex decleration without pointer

           // Below: New declaration with pointer
            { 
                hour= new int(ihour);
                minute = iminute;
                second = isecond;
            }

        // Destructor method for the above pointer
        ~Time()
        {
            cout << "in destructor" << endl;
            delete hour;
        }

        // -> Public methods
        
        // Mutator
        void setTime(int,int,int);
        
        // Accesor
        void print() const;

    private:

        // -> Private variables

        // int hour; 
        // Above: Ex variable
        
        // Below: Declaring as a pointer set to a constant adress
        const int *hour;
        int minute;
        int second;

};

#endif