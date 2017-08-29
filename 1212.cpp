#include<bits/stdc++.h>
using namespace std;

int main()
{
    string  x,y;
    while(cin >> x >> y){
            int Count=0;
    if(x=="0"&&y=="0")
        break;
    int a[10],b[10],C[10],k = 0;

    int counter,counter2;
    
    if( x.length() >= y.length() ){

    for( counter = 0; counter < x.length(); counter++ )

        a[counter] = x[counter] - 48;

    for( counter2 = 0; counter2 < y.length(); counter2++ )

        b[counter2] = y[counter2] - 48;
    }

    if( x.length() < y.length() ){

    for( counter = 0; counter < y.length(); counter++)

        a[counter] = y[counter] - 48;

    for( counter2 = 0; counter2 < x.length(); counter2++)

        b[counter2] = x[counter2] - 48;
    }
    int rem = 0;

    for( int i = counter-1, j = counter2-1; i >=0 || j>=0; i--, j--, k++ )
    {
        if( i>=0 && j>=0 )
        {
            int c = a[i]+b[j] + rem;

            if(c < 10)
            {
                    rem = 0;
                    C[k] = c;
            }
            else
            {
                    c = c-10;
                    rem = 1;
                   C[k] = c;
                   Count++;

            }


        }
    else
    {
        int c = a[i]+rem;
          if(c<10)
            {
                    rem = 0;
                    C[k] = c;
            }
            else
            {
                    c = c-10;
                    rem = 1;
                   C[k] = c;
                   Count++;
            }
      }

    }
    if(rem == 1)
        C[k++] = rem;
        for(int i = k-1; ;i--)
        {
            if(C[i] == 0){
                k--;
            }
            else
            {
                break;
        }
        }
        if(Count==0)
            cout<<"No carry operation.";
        else
        {
            if(Count==1)
                printf("1 carry operation.");
            else printf("%d carry operations.",Count);
        }
        cout << endl;
    }

return 0;
}
