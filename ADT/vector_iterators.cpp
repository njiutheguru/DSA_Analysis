#include <iostream>
#include <vector>
#include <string_view>


using namespace std;

int main(){

    vector <int> v1={3,55,66,77,33,22,55,77,88,66,-88};
   //v1 cannot be printed  directly but needs an iterator.

   for(int i=0;i<v1.size();++i){
    cout<<v1[i]<<" ";
   }
   cout<<endl;
   cout<<"The size of the vecotor is: "<<v1.size() <<endl;
   v1.pop_back();
   v1.pop_back();
   v1.push_back(33);
   v1.push_back(99);
    for(int i=0;i<v1.size();++i){
    cout<<v1[i]<<" ";
   }
    //v1.insert(5,v1.size(),-888);
   cout<<endl;
   for(vector <int>::iterator itr =v1.begin();  itr!=v1.end();++itr)
    {
        cout<<*itr<<" ";
    }

    //similar syntax for using the iterators
    vector<int>::iterator it;
    //it insert(5,-888);

    vector <int>:: iterator itr= v1.begin();
    cout<<endl;

    //erase one number at the middle of the vextor

    auto iter= v1.begin();
    v1.erase(iter);
   // iter=v1[5];
   //auto iter1 =v1.insert(5,5);
    //v1.erase(iter1,v1.end());

    while (itr !=v1.end())
    {
        /* code */
        cout <<*itr++<<" ";
    }
    



    return 0;
}