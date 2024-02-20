
/*
 there are two places where we can apply templates

- Function templates
- Class Templates


Templates are the way to write generic programs. 

Teh main point is we pass datat type as parameter to function or class


*/

#include <iostream>

using namespace std;

template <class T1, class T2>
auto get_max(T1 x, T2 y){
    return x>y?x:y;
}
/* 
using namespace std;
int getmax(int x,int y){
    return x>y? x:y;
}
//unnecessary number of functions doing the same type...

char getmaxchar(char x,char y)
{
    return x>y?x:y;
}
*/
int main(){

    int x=180, y=20;
    // Data types are passed during function calls
    cout <<get_max(x,y)<<endl;
    cout<<get_max(44.4,88.8)<<endl;
    cout <<get_max(34,88.9)<<endl;

    char c1='a',c2='x';
    cout <<get_max(c1,c2) <<endl;



    return 0;
}