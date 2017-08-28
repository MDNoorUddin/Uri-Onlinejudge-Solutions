#include<bits/stdc++.h>
using namespace std;
int main()
{
    int shoeNumber;
    int testCase=1;
    while(cin>>shoeNumber)
    {
        cin.ignore();
        if(testCase>1)
            cout<<endl;
        string str;
        getline(cin,str);
        string x;
        int totalShoes=0,maleShoes=0,femaleShoes=0;
        int count;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]!=' ')
                x=x+str[i];
            else
            {
                if(x.length()>1)
                {
                  count=atoi(x.c_str());
                  x.clear();

                }
                else
                {
                    if(shoeNumber==count)
                    {
                        totalShoes+=1;
                        if(x=="M")
                         maleShoes+=1;
                        else

                         femaleShoes+=1;
                    }
                    x.clear();
                }
            }
        }
        if(!x.empty())
        {
            if(shoeNumber==count)
                    {
                        totalShoes+=1;
                        if(x=="M")
                         maleShoes+=1;
                        else

                         femaleShoes+=1;
                    }
                    x.clear();
        }
        printf("Caso %d:\n",testCase++);
        printf("Pares Iguais: %d\n",totalShoes);
        printf("F: %d\n",femaleShoes);
        printf("M: %d\n",maleShoes);
    }
    return 0;
}
