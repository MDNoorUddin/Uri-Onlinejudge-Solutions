#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    while(te--)
    {
        int v[3];
        memset(v,0,sizeof(v));
        string p[3];
        p[0]="green";
        p[1]="blue";
        p[2]="red";
        string home,away;
        int t;
        cin>>t;
        cin.ignore();
        while(t--)
        {
            cin>>home>>away;
            if(home=="G")
            {
                if (away == "R") ++v[0];
                else v[0] += 2;
            }
            else if(home == "B")
			{
				if (away == "G") ++v[1];
				else v[1] += 2;
			}
			else
			{
				if (away == "B") ++v[2];
				else v[2] += 2;
			}
        }
        for(int i=0;i<3;i++)
            {
                int ptr=0;
                while(ptr<3-i-1)
                {
                    if(v[ptr]>v[ptr+1])
                    {
                        swap(v[ptr],v[ptr+1]);
                        swap(p[ptr+1],p[ptr]);
                    }
                    ptr++;
                }
            }
        if (v[0] == v[1] && v[0] == v[2]) cout << "trempate\n";
			else if(v[2]==v[1]) cout << "empate\n";
			else{
			    cout<<p[2]<<endl;
			}
    }
    return 0;
}
