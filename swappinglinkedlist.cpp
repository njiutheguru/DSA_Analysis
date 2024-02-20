#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int data;
    struct node *l1;
};

int main()
{
    // struct node a,b;
    struct node *a=(struct node*)malloc(sizeof(struct node));
    struct node *b=(struct node*)malloc(sizeof(struct node));
     a->data=54;
     a->l1=nullptr;
     b->data=66;
     b->l1=nullptr;
    a->l1=b;
    cout<<"a: "<<a->data <<" b: "<<b->data<<endl;
    cout<<"After swapping..."<<endl;
    a->data=b->data + a->data;
    b->data=a->data-b->data;
    a->data=a->data-b->data;
    b->l1=a->l1;
    a->l1=nullptr;
        cout<<"a: "<<a->data <<" b: "<<b->data<<endl;
    delete a,b;
        cout<<"a: "<<a->data <<" b: "<<b->data<<endl;
    return 0;
}
