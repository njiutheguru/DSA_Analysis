#include <iostream>

using namespace std;


int const & max(int const &a, int const & b){
    cout<<"max(int ,int)"<<endl;
    return a>b? a: b;
}
template <typename T>
T const & max(T const & a, T const &b){  
    cout <<"max (T, T)"<<endl;
    return a>b?a:b;
}

template <typename T>
T const & max(T const &a, T const & b, T const & c){
    cout<<"max(T,T,T)"<<endl;
    return max(max(a,b),c); //This will call the type int function twice 
}


int main()
{
    ::max(10.0,20.0);
    ::max('a','n');
    ::max(10,20);
    ::max <>(10,20);
    ::max <double>(10,10);
    ::max(10,20,50);


    return 0;
}