#include <iostream>

using namespace std;

int main() {

    int x,y;
    int count=0,in=0,g=0,d=0;
    int c=1;
    while(c==1)
    {
        count++;
        cin>>x>>y;
        if(x>y)
        in++;
        if(y>x)
        g++;
        if(x==y)
        d++;
        while(1)
        {
            cin>>c;
            if(c>=1&&c<=2)
            {
                break;
            }
            cout<<"Novo grenal (1-sim 2-nao)\n";
        }
        cout<<"Novo grenal (1-sim 2-nao)\n";
    }
    cout<<count<<" grenais\n";
    cout<<"Inter:"<<in<<endl;
    cout<<"Gremio:"<<g<<endl;
    cout<<"Empates:"<<d<<endl;
    if(in>g)
    cout<<"Inter venceu mais\n";
    if(in<g)
    cout<<"Gremio venceu mais\n";
    if(in==g)
    cout<<"Nao houve vencedor\n";

    return 0;
}
