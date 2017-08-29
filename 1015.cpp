#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    x1=(x2-x1)*(x2-x1);
    y1=(y2-y1)*(y2-y1);
    x1=sqrt(x1+y1);
    printf("%.4lf\n",x1);
    return 0;
}
