//Leetcode Reverse an integer problem...solved!1
#include <iostream>
#include <math.h>

using namespace std;
int digit(int num){
    if(num<0){
        num=0-num;
    }
    int k=1,i=0;
    
    while(k<=num){
        k=1*pow(10,i);
        i++;
    }
    return i-2;
}
int main()
{
    int num=0;
    cout<<"Enter Integer to be reversed: ";
    cin>>num;
    int n=0;
    int k=digit(num);
    int number=0;
    cout<<"num is: "<<num<<" The reverse is: "<<endl;
    while(num >0){
       n=num%10;
       num=num/10;
        number += n*pow(10,k);
       --k;
        
    }

    if(num <0){
        num=0-num;
        while(num >0){
       n=num%10;
       num=num/10;
       number += n*pow(10,k);
       --k;
        }
        number=0-number;
    }
    cout<<(number)<<endl;
    return EXIT_SUCCESS;
}