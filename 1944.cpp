#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
int main()
{
    int t;
    cin>>t;
    char a,b,c,d;
    char A,B,C,D;
    stack<char> q;
    int count=0;
    while(t--)
    {
        if(q.empty())
        {
            q.push('F');q.push('A');q.push('C');q.push('E');
        }
        cin>>a>>b>>c>>d;
        D=q.top();q.pop();
        C=q.top();q.pop();
        B=q.top();q.pop();
        A=q.top();q.pop();
        //cout<<a<<D<<b<<C<<c<<B<<d<<A<<endl;
        if(a==D&&b==C&&c==B&&d==A)
        {
            count++;
        }
        else
        {
             q.push(A);q.push(B);q.push(C);q.push(D);
             q.push(a);q.push(b);q.push(c);q.push(d);
        }
    }
    cout<<count<<endl;
}
