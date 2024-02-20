#include <iostream>
#include <cstdlib>
#include <string_view>
#include <sstream>

using namespace std;

bool evenSum(int a[], int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
        return (sum%2)==0; //returns true if sum is even
    

}
struct Passenger {
    string name;
   // MealType mealPref;
    bool isFreqflyer;
    string freqflyerno;
};
ostream & operator <<(ostream & out, const Passenger &pass){
    out <<pass.name <<" " ;
    if(pass.isFreqflyer){
        out<<" "<<pass.freqflyerno;
    }
    return out;

}

 int main(){
    int list[]={5,3,6,7,9,7,1};
    int size=sizeof(list)/sizeof(int);
    bool result =evenSum(list,size);
    if(result) cout<<"the sum is even \n";
    else   cout<<"The sum is odd \n";

    Passenger pass={"John Smith", /*VEGETARIAN, */true,"455443328"};


    return 0;
 }
 /*
 
 Overloading 
 overloading means defineing two or more functions or operators that have the same name, but whose effect depends onthe types of their actual arguments.

 Function overloading occurs when two or more functions are defined withe the same name but with different arguent lists. such definitions are useful in situations where we desire two functions that achieve essentially the same purpose, but do it with different types of arguuments

 A constructor's job is to initialize the values of the class's memeber variables
 
 */