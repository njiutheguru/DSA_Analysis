
#include <iostream>
#include <cstring>

using namespace std;
 class IntCell
 {
 public:
 explicit IntCell( int initialValue = 0 )
 { storedValue = new int{ initialValue }; }

 int read( ) const
 { return *storedValue; }
 void write( int x )
 { *storedValue = x; }

 private:
 int *storedValue;
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