#include <iostream>
#include <vector>

using namespace std;
#define NOT_FOUND -1

template <typename comparable>
int binarySearch( const vector< comparable> & a, const comparable &x){
    int low =0, high= a.size() -1;

    while(low <= high){
         int mid = (low+high)/2;
         if(a[mid] <x) low=mid+1;
         else if(a[mid]>x) high=mid-1;
         else return mid;

    }
    return NOT_FOUND; //NOT FOUND IS DEFINED AS -1
}

int main()
{

    vector<int> a={4,5,6,7,15,33,122,133,144,155,166,169,199};
    int res=binarySearch(a,33);
    vector<string> arr={"Helloworld","welcome","yeah","school"};
    printf("The index of 33 is %d ",res);
    cout<<endl;
    string man= binarySearch(arr,"Helloworld");
    cout<<man<<endl;

    return 0;
}