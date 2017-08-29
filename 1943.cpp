#include <iostream>

using namespace std;

int main() {

    int a;
    cin>>a;
    if(a<=1)
    cout<<"Top 1\n";
    if(a>1&&a<=3)
    cout<<"Top 3\n";
     if(a>3&&a<=5)
    cout<<"Top 5\n";
     if(a>5&&a<=10)
    cout<<"Top 10\n";
     if(a>10&&a<=25)
    cout<<"Top 25\n";
      if(a>25&&a<=50)
    cout<<"Top 50\n";
     if(a>50&&a<=100)
    cout<<"Top 100\n";
    return 0;
}
