#include <iostream>
#include <cstring>
#include <vector>
using namespace std;




int main()
{

    vector <int > squares(100);
    for(int i=1;i<=squares.size();++i)
    {
        squares[i]=i*i;
        cout <<i<<" : "<< squares[i]<<endl;
    }
    int sum=0;
    //finding the sum of the vector
    for(auto x: squares)
    {
          sum += x;  
    }
     cout<<"sum of numbers from 1 - 100 is: "<<sum<<endl;
    return 0;
}