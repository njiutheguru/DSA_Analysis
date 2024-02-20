#include <iostream>

using namespace std;
/*
class reverse{
private:
int a[]={};
int n;

public:
reverse(int array[],int size){
    a[]=array[];
    n=size;
}
void reversearray(int a[],int n)
{
    auto size=n;
 for(int i{};i<n;--i){
    int n=size;
    swap(a[i],a[n]);
    --n;

 }
 for(int m=0;m<a.size();m++){
    cout<<a[m]<<endl;
 }
}
};
*/
void reversearray( int a[],int n)
{
    auto size=n;
 for(int i=0;i<n;++i,--n){
    
    
    swap(a[i],a[n-1]);
   

 }
 for(int m=0;m<size;m++){
    cout<<a[m]<<" ";
 }
}


int main()
{
    int array[]={45,66,33,77,88,55,33,22};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<sizeof(array)<<endl;
    cout<<size<<endl;
    cout<<"Before reversing the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i] <<" ";
    }
    cout<<endl;
    cout<<"After reversing the array...."<<endl;
    reversearray(array,size);
  cout<<endl;
  cout<<"Comparing with the original array"<<endl;
   for(int i=0;i<size;i++)
    {
        cout<<array[i] <<" ";
    }
//since the reverse array can be accessed as the original array in reversed form, then c++ allows const reference method when passing the parameters...

    return 0;
}
