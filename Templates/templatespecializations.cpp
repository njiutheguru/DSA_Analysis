#include <iostream>
#include <vector>   
#include <sstream>

using namespace std;



template <typename T>
T addall(vector<T> list){
    T count =0;
    for(auto & elem:list){
        count +=elem;
    }
    return count;
}

//template specialisation...
template <>
string addall(vector<string> list){
    int count =0;
    for (const string & elem: list){
        for (const char & chr:elem){
            count +=chr;
        }



    }
   
   ostringstream ostr;
    ostr<<count;
    string strcount=ostr.str();
    return strcount;
}

int main(){

vector <int> vecint={1,4,5,77,6,55,44};
vector<double> vecdouble ={4.5,4.6,1.1,0.9,34.5};
vector<string> vecstring ={"ab","cd"};
cout<<addall(vecint)<<endl;
cout<<addall(vecdouble)<<endl;
cout<<addall(vecstring)<<endl; //This brings out a logical error


    return 0;
}