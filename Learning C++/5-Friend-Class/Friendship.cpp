#include <iostream>
using namespace std;

class FriendClass
{

    double x;
    
    public:

        FriendClass(int initialValue = 5.0)
        : x(initialValue) {}

        friend class Friendship;


        double canYouSee() const
        {
            return x;
        }
};


class Friendship
{
    public:
        void display(FriendClass f)
        {
            cout<<f.x<<endl;
        };

};


int main()
{
    Friendship a;
    FriendClass b;

    a.display(b);
    cout<<b.canYouSee()<<endl;

    return 0;

}