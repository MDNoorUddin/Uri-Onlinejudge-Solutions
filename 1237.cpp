#include<iostream>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    while(getline(cin,str2)){
    int len=0,len2=0;
    for(int i=0;i<str1.length();i++)
    {
        for(int j=0;j<str2.length();j++)
        {
            if(str2[j]==str1[i])

            {
                len2=0;
                for (int k = j,l=i;k<str2.length(),l<str1.length() ; k++,l++)
                {
                    if(str2[k]!=str1[l])
                        break;
                        len2++;
                }

            if(len2>len){
                    len=len2;
            }
            }


        }
    }
    cout<<len<<endl;
    getline(cin,str1);
    }
}
