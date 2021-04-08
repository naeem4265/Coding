#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int n,i;
    double a,sum;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin >> a;
        sum= a*a*(pi/2.0-1.0);
        printf("%.18lf\n",sum);
    }
}
