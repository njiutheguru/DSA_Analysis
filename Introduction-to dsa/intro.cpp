#include <iostream>
#include <vector>

using namespace std;

//LargeType class needs to be defined
/*

LargeType randomItem1( const vector<LargeType> & arr )
 {
 return arr[ randomInt( 0, arr.size( ) - 1 ) ];
 }

 const LargeType & randomItem2( const vector<LargeType> & arr )
 {
 return arr[ randomInt( 0, arr.size( ) - 1 ) ];
 }
 int main()
 {

 

 vector<LargeType> vec;
  LargeType item1 = randomItem1( vec ); // copy
 LargeType item2 = randomItem2( vec ); // copy
 const LargeType & item3 = randomItem2( vec ); // no copy

return 0;



IMPLEMENTING A FUNCTION TO SWAP TWO NUMBERS USING STD::MOVE
 }
 */
void rswap(double &a, double &b){
    double tmp=move(a);
    a=move(b);
    b=move(tmp);
    cout<<"After swapping, x is: "<<a<<" and y is: "<<b<<endl;


}
int main()
{
    
    double x=54;
    double y= 44;
    cout <<"BEFORE SWAPPING: The value of x: "<<x<<" And the value of Y is: "<<y<<endl;

    rswap(x,y);
    cout <<"The value of x: "<<x<<" And the value of Y is: "<<y<<endl;
    
    return 0;
}

