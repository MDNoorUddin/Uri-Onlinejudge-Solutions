#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void create(node* p,int n);
node* remove(node* p,int y);
void show(node *p);
int main()
{
    int n,r;
    while(cin>>n>>r){
           // if(n==r)
            //cout<<"*\n";
    //else{
    node *head;
    head=new node;
    create(head,n);
    for(int i=1;i<=r;i++)
    {
        int d;
        cin>>d;
        head=remove(head,d);
    }
    if(n==r){
        cout<<"*\n";
        continue;
    }
    show(head);
    cout<<endl;
    //}
    }
    return 0;
}
void create(node *p,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i!=n)
        {
            p->data=i;
            p->next=new node;
            p=p->next;
        }
        else
        {
            p->data=i;
            p->next=NULL;
            p=p->next;
        }
    }
    return;
}
void show(node *p)
{
    while(p){
    cout<<p->data<<" ";
    p=p->next;
    }
    return;
}
node* remove(node* p,int y)
{
    bool x=true;
    node *g;
    g=p;
    while(p)
    {
        if(p->data==y&&x)
        {
                node *li;
                li=new node;
                li=p->next;
                delete(p);
                p=li;
                return p;
        }
        x=false;
        if(p->next->data==y)
        {
            node *li;
            li=new node;
            li=p->next->next;
            delete p->next;
            p->next=li;
            return g;
        }
        p=p->next;
    }
}
