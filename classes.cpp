/*
falilure to use a copy constructor in classes when new keyword is uded resuts in shallow copy

DEALLOCATING THE EXISTING ARRAY, ALLOCATE A NEW ARRAY, AND COPY THE CONTENTS OVER.

Vect & Vect::operator = (const Vect &a){
    if(this !=&a){
        delete []data;
        size=a.size;
        data=new int[size];
        for(int i=0;i<size;i++){
            data[i]=a.data[i];
        }
    }
    return *this;
}

... Note that this is defined to be the addressof this instance.

STRINGS OPERATIONS...
string s="a dog";
s+= "is a dog";
cout<<s.find("dog");
cout<<s.find("dog",3);
//erase
//replace
//insert
*/