#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int match,buy;
    while(cin>>match>>buy)
    {
        vector<int> diff;
        int a,b;
        int point=0;
        for(int i=0;i<match;i++)
        {
            cin>>a>>b;
            if(a==b)point+=1;
            if(a>b)point+=3;
            if(b-a<0)
            diff.push_back(11111111);
            else diff.push_back(b-a);

        }
        sort(diff.begin(),diff.end());
        int I=0;

        while(buy>0&&I<match)
        {
            int d=buy-diff[I];
            if(d<0){

            }
            else if(d==buy)
            {
                buy--;
                point+=2;
            }
            else if(d==0)
            {
                buy--;
                point+=1;
            }
            else{
                buy=buy-diff[I];
                if(buy>0){
                buy--;
                if(diff[I]==11111111)
                    point+=2;
                else point+=3;
                }
                else {point+=1;}
            }
            I++;
        }
        cout<<point<<endl;
    }
    return 0;
}

