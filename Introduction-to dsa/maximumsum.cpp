#include <iostream>
#include <vector>



using namespace std;

int max_sub_sum(const vector<int> &a){
    int max_sum=0;
    for (int i=0; i<a.size();++i){
        for(int j=0;j<a.size();++j){
            int this_sum=0;
             for( int k=i;k<=j;++k){
            this_sum+=a[k];
            }
            if(this_sum >max_sum){
                max_sum=this_sum;
            }


        }
       
    }
    return max_sum;
}
int main()
{
int sum=0;
vector<int> a={1,4,6,55,4,3,5,100};
for(int i=0;i<a.size();++i){
    sum+=a[i]; //Takes o(n)
}
cout<<"sum of a is: "<<sum<<endl;

int result=max_sub_sum(a); //takes o(n^3)
cout<<"Sum is: " <<result<<endl;

    return 0;
}