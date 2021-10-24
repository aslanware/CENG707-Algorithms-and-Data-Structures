#include <iostream>
using namespace std;

class IntCell
{
    public:
        // Setting constructor
        IntCell(int initialValue = 0)
            :storedValue (initialValue) { }

        // Accesor method
        int read() const
        {
            return storedValue;
        }

        // Mutator method
        void write(int x)
        {
            storedValue = x;
        }
    

    private:

        // A private variable
        int storedValue;

};

int main()
{

    // Constructs an IntCell with default parameter
    IntCell intCell;

    // Prints IntCell
    cout << "IntCell contains: " << intCell.read() << endl;

    // Asking for user input
    cout << "Enter a number: " << endl;
    
    // Assigning the input to a variable
    int userInput;
    cin >> userInput;

    // Calling mutator method
    intCell.write(userInput);

    // Prints IntCell
    cout << "now Intcell contains: " << intCell.read() << endl; 


};