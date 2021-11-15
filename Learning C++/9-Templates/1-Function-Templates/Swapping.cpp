#include <iostream>

using namespace std;

template <class T>
void swap (T &lhs, T &rhs) {

    T tmp = lhs;
    lhs = rhs;
    rhs = tmp;

}

int main() {

    int x = 5, y = 7;
    double a = 2, b = 4;

    swap(x,y);
    swap(a,b);

    cout << x << "" << y << endl;
    cout << a << "" << b << endl;


    return 0;
}