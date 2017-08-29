#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void create(node *p,int n);
bool check(node *p);
int main()
{
    node *head;
    head=new node;
    int n;
    cin>>n;
    create(head,n);
    bool str=check(head);
    cout<<str<<endl;
    return 0;
}
void create(node *p,int n)
{
    for(int i=1;i<=n;i++)
    {
        cin>>p->data;
        if(i!=n){
            p->next=new node;
            p=p->next;
        }
        else
            p->next=NULL;

    }
    return;
}
bool check(node *p)
{
    bool x=true,y=true;
    if(p->next->next){

    while(p->next->next)
    {
        if(p->next->data>p->data){
        if(p->next->data>p->next->next->data){
            p=p->next;
            x=true;
        }
        else {
            x=false;
            break;
        }}
        else if(p->next->data<p->data){
        if(p->next->data<p->next->next->data){
            p=p->next;
            x=true;
        }
        else {
            x=false;
            break;
        }}
    }
    }
    else
    {
        if(p->data==p->next->data)
            x=false;
        else
            x=true;
    }
    if(x)
        return 1;
    if(!x)
     return 0;
}

