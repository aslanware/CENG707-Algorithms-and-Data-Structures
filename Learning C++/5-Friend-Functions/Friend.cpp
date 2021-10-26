class Friend
{

    double x;
    
    public:

        Friend(int initialValue = 0)
        : x(initialValue) {}


        double canYouSee() const
        {
            return x;
        }
};


