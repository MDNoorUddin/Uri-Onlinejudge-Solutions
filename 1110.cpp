#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n)
    {
        queue<int> Card;
        if(n==1){
            cout<<"Discarded cards:\n";
            cout<<"Remaining card: 1\n";
        }
        else{
        for(int i=1;i<=n;i++)
        {
            Card.push(i);
        }
        vector<int> Top;
        while(true)
        {
            if(Card.size()==2)
            {
                Top.push_back(Card.front());
                Card.pop();
                break;
            }
            Top.push_back(Card.front());
            Card.pop();
            Card.push(Card.front());
            Card.pop();


        }
        printf("Discarded cards: ");
        for(int i=0;i<Top.size()-1;i++)
        {
            printf("%d, ",Top[i]);
        }
        cout<<Top[Top.size()-1]<<endl;
        printf("Remaining card: %d\n",Card.front());
        }
    }
        return 0;
}
