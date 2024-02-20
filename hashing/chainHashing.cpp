#include <iostream>
#include <list>
#include <cstring>

using namespace std;

//hashtable to implement 905, jimmy


class hashtable{
    private:
    static const int hashgroups =10;
    list<pair<int,string>>table[hashgroups]; //list 1, index 0, list 2, index 1 ...

    public:
        bool isempty() const;
        int hashfunction(int key);
        void insertitem(int key, string value);
        void removeitem(int key);
        void searchtable(int key);
        void printtable();


};

bool hashtable::isempty() const{
    int sum{};
    for(int i{};i<hashgroups;i++){
        sum +=table[i].size();

    }
    if(!sum){
        return true;
    }
    return false;

}
int hashtable::hashfunction(int key){
    return key % hashgroups; //key: 904 in return, this function will spit out 5
}

void hashtable::insertitem(int key, string value){
    int hashvalue =hashfunction(key);
    auto & cell =table[hashvalue];
    auto bitr=begin(cell);
    bool keyexists=false;
    for(;bitr != end(cell);bitr++){
        
            if(bitr -> first ==key){
                keyexists =true;
                bitr->second =value;
                cout <<"[WARNING ]key esixts. Value replaced"<<endl;
                break;
            }
        }
        if(!keyexists) {
            cell.emplace_back(key,value);
        
    }
    return;
}
void hashtable::searchtable(int key){
    int hashvalue=hashfunction(key);
    auto & cell =table[hashvalue];
    auto bitr =begin(cell);
    bool keyexists =false;
    for(; bitr!= end(cell);bitr++){
        if(bitr ->first ==key){
            keyexists =true;
            cout <<"[INFO] Key: "<<bitr->first <<"  value: "<<bitr->second <<endl;
            break;
        }

    }
    if(keyexists ==false){
        cout<<"The searched key does not exist and hence does not have any value associated with it..."<<endl;    
    }
}

void hashtable::removeitem(int key){
    int hashvalue =hashfunction(key);
    auto & cell =table[hashvalue];
    auto bitr =begin(cell);
    bool keyexists =false;
    for(; bitr!= end(cell);bitr++){
        if(bitr ->first ==key){
            keyexists =true;
            bitr =cell.erase(bitr);
            cout <<"[INFO] Item removed." <<endl;
            break;
        }

    }
    if(!keyexists){
      cout <<" [WARNING] Key not found. Pair not removed" <<endl; 
    }
    return;
}

void hashtable::printtable() {
    for(int i{};i<hashgroups;i++){
        if(table[i].size()==0) continue; 
        
        auto bitr =table[i].begin();
        for(; bitr !=table[i].end();bitr++){
            cout <<"[INFO] Key: "<<bitr->first <<"  value: "<<bitr->second <<endl;
        }
        
         }
        return;
}

int main() {
    hashtable ht;
    if(ht.isempty()){
        cout<<"correct answer. Good job.";
        cout<<endl<<endl;
    }
    else{
        cout <<"oh oh. We need to check out code! "<<endl;
    }
    ht.insertitem(594,"Jim");
    ht.insertitem(554,"Karen");
    ht.insertitem(889,"Stephen");
    ht.insertitem(786,"Marcus");
    ht.insertitem(222,"Salim");
    ht.insertitem(888,"Abubakar");
    ht.insertitem(990,"Angela");
    ht.insertitem(907,"Kamau");
    ht.insertitem(564,"Otieno"); 
    ht.insertitem(998,"Marcus");
    ht.insertitem(888,"Kiprono");

    ht.printtable();

    ht.removeitem(907);
    ht.removeitem(594);

    if(ht.isempty()){
        cout <<"oh oh. You need to check out your program..." <<endl;
    }
    else {
        cout <<" Correct answer! good job! " <<endl;
    }
    cout <<"final hashtable..."<<endl;
    cout <<"======================================="<<endl;
    ht.printtable();
    cout<<"==================SEARCH VALUE USING KEY========================"<<endl;

    ht.searchtable(990);
    ht.searchtable(889);
    ht.searchtable(003);
    


}