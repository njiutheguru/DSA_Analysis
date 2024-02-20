#include <iostream>
#include <vector>
#include <cstring>


using namespace std;

template <typename Comparable>
const Comparable & findMax(const vector<Comparable> &a)
{
    int max_index=0;
    for (int i=1;i<a.size();++i){
        if(a[max_index]<a[i]){
            max_index =i;//Takes o(n) for looping through the array
        }
        
    }
    return a[max_index];
}
int findMax1(const int *a){
     int max_index=0;
    for (int i=1;i<a.size();++i){
        if(a[max_index]<a[i]){
            max_index =i;//Takes o(n) for looping through the array
        }
        
    }
    return a[max_index];
}

int main()
{
    int array[]={1,4,6,7,5,3,66,7};

    int result=findMax1(&array);
    cout<<result<<endl;

    return 0;
}