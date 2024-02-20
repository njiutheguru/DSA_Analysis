#include <iostream>
#include <string_view>

using namespace std;

class square
{
public:
    explicit square(double s=0.0):side{s}
    {}
    double getside() const{
        return side;
    }
    double getarea() const 
    {
        return side*side;
    }
    double getperimeter() const
    {
        return 4*side;
    }
    void print( ostream & out =cout) const 
    {
        out <<"(square" <<getside()<<")";
    }
    bool operator< (const square &rhs) const 
    {
        return getside() <rhs.getside();
    }
    private:
    double side;
};

//Define an output operator for square
ostream & operator<< (ostream & out, const square & rhs)
{
    rhs.print(out);
    return out;
}

int main()
{
   square a(25);
    cout<<"Largest square: "<<a.getarea()<<endl;
     cout<<"Largest Perimeter: "<<a.getperimeter()<<endl;
    return 0;
}