#include <iostream>

using namespace std;

class swapf{
public:
swapf(double num1, double num2){
num=num1;
number=num2;
}
void swap1(double &a,double &b){
 a=a+b;
 b=a-b;
 a=a-b;
}

private:
double num;
double number;
};
int main() 
{ 
    double a=45;
    double b=66;
    swapf item1(a,b);
    item1.swap1(a,b);
    cout<<"After swapping , the value of a is: "<<a<<" and the value of b is : "<<b<<endl;
    return 0;
}