#include<bits/stdc++.h>
using namespace std;
int C;
class bst
{
    struct tree
    {
        int data;
        struct tree *left;
        struct tree *right;
    };

    tree *root;

public:

    bst()
    {
        root=NULL;
    }
    bool IsEmpty()const
    {
        return root == NULL;
    }
    void insert(int num)
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
        this->inorder(root);
    }
    void inorder(tree *p)
    {

        if(p->left)
            inorder(p->left);
        cout<<p->data;
        C--;
        if(C) cout<<" ";
        if(p->right)
            inorder(p->right);
    }
    void preorder_traverse()
    {
        cout<<"Pre.: ";
        this->preorder(root);
    }
    void preorder(tree *p)
    {

        cout<<p->data;
        C--;
        if(C) cout<<" ";
        if(p->left)
            preorder(p->left);
        if(p->right)
            preorder(p->right);
    }
    void postorder_traverse()
    {
        cout<<"Post: ";
        this->postorder(root);
    }
    void postorder(tree *p)
    {

        if(p->left)
            postorder(p->left);
        if(p->right)
            postorder(p->right);
        cout<<p->data;
        C--;
        if(C) cout<<" ";
    }

};


int main()
{
    freopen("x.txt","w",stdout);
    int t;
    cin>>t;
    int cs=1;
    while(t--){
    bst b;
    int n;
    cin>>n;
    C=n;
    int key;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        b.insert(key);
    }
    cout<<"Case "<<cs++<<":"<<endl;

    b.preorder_traverse();
    cout<<endl;
    printf("In..: ");
    C=n;
    b.inorder_traverse();
    cout<<endl;
    C=n;
    b.postorder_traverse();
    cout<<endl;
    cout<<endl;
    }
    return 0;
}
