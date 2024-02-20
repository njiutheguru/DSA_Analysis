#include <iostream>
#include<cstring>

using namespace std;

class IntCell
{
public:
    explicit IntCell (int InitialValue=0)
    {
        StoredValue=new int(InitialValue);
    }
    //creating a destructor
    ~IntCell()
    {
        delete StoredValue;
    }
    //copy constructors
    IntCell(const IntCell &rhs){
        StoredValue=new int { *rhs.StoredValue};
    }

    //move constructors

    IntCell (IntCell && rhs): StoredValue{rhs.StoredValue}
    {
        rhs.StoredValue=nullptr;
    }
    //copy Assignment

    IntCell & operator= (const IntCell &rhs){
        if(this !=&rhs){
            *StoredValue=*rhs.StoredValue;
        }
        return *this;
    }
//move assignment
IntCell & operator = (IntCell &&rhs){
    swap(StoredValue,rhs.StoredValue);
    return *this;
}
int read() const{
    return *StoredValue;
}
void write(int x){
    *StoredValue=x;
}




private:
int *StoredValue;
};
 
 
 int main()
{
 IntCell a{ 2 };
 IntCell b = a;
 IntCell c;

 c = b;
 a.write( 4 );
 cout << a.read( ) << endl << b.read( ) << endl << c.read( ) << endl;

 return 0;
 }