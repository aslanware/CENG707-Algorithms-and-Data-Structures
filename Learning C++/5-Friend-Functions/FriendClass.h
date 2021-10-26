class FriendClass
{

    double x;
    
    public:

        FriendClass(int initialValue = 5.0)
        : x(initialValue) {}

        friend class Friendship;

};