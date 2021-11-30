#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10003
using namespace std;
vector<int>digit;
int cal[limit][102];

int fnd(int n)
{
    digit.clear();
    while(n)
    {
        digit.pb(n%10);
        n /= 10;
    }
    int i,mx=0,mn=0;
    for(i=digit.size(); i<4; i++)
        digit.pb(0);
    sort(digit.begin(),digit.end());
    for(i=0; i<4; i++)
        mn = mn*10+digit[i];
    for(i=3; i>=0; i--)
        mx = mx*10+digit[i];
    return mx-mn;
}

void solve(int t)
{
    int i,j,n,m,k,ans;
    scanf("%d %d",&n,&k);
    m = n;
    while(k>100)
    {
        n = cal[n][100];
        k -= 100;
    }
    printf("%d\n",cal[n][k]);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int i,j;
    for(i=0; i<limit; i++)
    {
        cal[i][0] = i;
        for(j=1; j<101; j++)
        {
            cal[i][j] = fnd(cal[i][j-1]);  //cout <<i<<" "<<j<<" "<<cal[i][j]<<endl;
        }
    }
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

