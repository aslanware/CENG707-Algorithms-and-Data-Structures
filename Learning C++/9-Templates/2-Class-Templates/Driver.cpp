#include <iostream>
#include "MemoryCell.cpp"

using namespace std;

int main() {

    MemoryCell<int> m;
    MemoryCell<float> f;
    MemoryCell<int> m2;


    m.write(5);
    m2.write(6);
    f.write(3.5);

    cout << "Cell content: " << m.read() << endl;
    cout << "Cell content: " << m2.read() << endl;
    cout << "Cell content: " << f.read() << endl;

    int x;
    cin >> x ;

    return 0;

}