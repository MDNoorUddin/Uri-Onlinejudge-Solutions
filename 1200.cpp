#include<bits/stdc++.h>
using namespace std;
int C;
int x;
class bst
{
    struct tree
    {
        char data;
        struct tree *left;
        struct tree *right;
    };

    tree *root;

public:

    bst()
    {
        root=NULL;
    }
    bool f(char c)
    {
        tree * curr=root;
        while(curr)
        {
            //cout<<"f "<<curr->data<<endl;
            if(curr->data==c)return true;
            if(curr->data>c){ if(!curr->left) return false;curr=curr->left;}
            if(curr->data<c) {if(!curr->right) return false;curr=curr->right;}

        }
        return false;
    }
    bool IsEmpty()const
    {
        return root == NULL;
    }
    void insert(char num)
    {
        tree *temp,*parent;
        temp=new tree;
        temp->data=num;
        temp->left=NULL;
        temp->right=NULL;
        parent=NULL;
        if(IsEmpty())
        {
            root=temp;
            return;
        }
        else
        {
            tree *curr;
            curr=root;
            while(curr)
            {
                parent=curr;
                if(temp->data>=curr->data)
                    curr=curr->right;
                else
                    curr=curr->left;
            }
            if(temp->data>=parent->data)
                parent->right=temp;
            else
                parent->left=temp;
        }
        return;
    }
    void inorder_traverse()
    {
        x=C;
        this->inorder(root);
    }
    void inorder(tree *p)
    {

        if(p->left)
            inorder(p->left);
        cout<<p->data;
        x--;
        if(x)cout<<" ";
        if(p->right)
            inorder(p->right);
    }
    void preorder_traverse()
    {
        //cout<<"Pre.: ";
        x=C;
        this->preorder(root);
    }
    void preorder(tree *p)
    {

        cout<<p->data;
        x--;
        if(x)cout<<" ";
        if(p->left)
            preorder(p->left);
        if(p->right)
            preorder(p->right);
    }
    void postorder_traverse()
    {
        //cout<<"Post: ";
        x=C;
        this->postorder(root);
    }
    void postorder(tree *p)
    {

        if(p->left)
            postorder(p->left);
        if(p->right)
            postorder(p->right);
        cout<<p->data;
        x--;
        if(x)cout<<" ";
    }

};


int main()
{
    string key;
    bst b;
    while(getline(cin,key)){
        if(key.length()==3){
        if(key[0]=='I'){C++;
        b.insert(key[2]);}
        else{
            if(b.f(key[2]))cout<<key[2]<<" existe\n";
            else cout<<key[2]<<" nao existe\n";
        }
        }
        else if(key.length()==6)
        {
            b.inorder_traverse();
            cout<<endl;
        }
        else{
            if(key[1]=='O'){
             b.postorder_traverse();
             cout<<endl;
            }
            else{
                 b.preorder_traverse();
                 cout<<endl;
            }
        }
    }
    return 0;
}
