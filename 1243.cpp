#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    char a[100];
    while(gets(a))
    {
        x=a;
        bool firstSpace=true;
        bool isWord=false;
        bool isDot=false;
        bool isDigit=false;
        int numberOfWords=0;
        int lengthsOfTheWords=0;
        string temp;
        for(int i=0;i<x.length();i++)
        {
            if((x[i]>=65&&x[i]<=90)||(x[i]>=97&&x[i]<=122)){
               temp=temp+x[i];
               if(isDot||isDigit)
                isWord=false;
                else if(!isDot&&!isDigit)
                    isWord=true;
            }
            if(x[i]==' ')
            {
                if(temp.empty())
                {
                    firstSpace=true;
                }
                else
                {
                    //cout<<temp;
                    if(isWord){
                            bool Find=true;
                            if(isDot)
                            {
                            numberOfWords+=1;
                            lengthsOfTheWords+=temp.length()-1;
                            temp.clear();
                            firstSpace=true;
                            //cout<<"=is a word\n";
                            }
                             if(Find)
                            {
                                //cout<<"=is a word\n";
                            numberOfWords+=1;
                            lengthsOfTheWords+=temp.length();
                            temp.clear();
                            firstSpace=true;
                            Find=false;
                            }
                            else
                            {
                                //cout<<"=is not a word\n";
                                temp.clear();
                                firstSpace=true;
                            }
                    }
                    else{
                        //cout<<"=is not a word\n";
                        temp.clear();
                        firstSpace=true;
                    }
                    isWord=false;
                    isDot=false;
                    isDigit=false;

                }

            }
            if(x[i]>=48&&x[i]<=57)
            {
                isWord=false;
                temp=temp+x[i];
                isDigit=true;
            }
            if(x[i]=='.')
            {
                if(isDot)
                isWord=false;
                else
                isDot=true;
                temp=temp+x[i];
            }
        }
        //cout<<temp;
        if(isWord)
        {
            /**cout<<temp<<endl;*/
            //cout<<"=is a word\n";
            bool Find=true;
            if(isDot)
            {
                            numberOfWords+=1;
                            lengthsOfTheWords+=temp.length()-1;
                            temp.clear();
                            firstSpace=true;
                            Find=false;
            }
            if(Find)
            {
                numberOfWords+=1;
                            lengthsOfTheWords+=temp.length();
                            temp.clear();
                            firstSpace=true;
                            Find=false;
            }

        }
        //else cout<<"=is not a word\n";
       // cout<<"Number of words are:"<< numberOfWords<<endl;
        if(numberOfWords!=0){
        numberOfWords=(int)lengthsOfTheWords/numberOfWords;
        if(numberOfWords<=3)
            cout<<250<<endl;
        else if(numberOfWords==4||numberOfWords==5) cout<<500<<endl;
        else if(numberOfWords>=6) cout<<1000<<endl;
        }
        else cout<<250<<endl;

    }
    return 0;
}

