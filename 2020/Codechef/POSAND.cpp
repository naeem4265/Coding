#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

int P(int b,int p)
{
    int x=1;
    while(p)
    {
        if(p&1) x = x*b;
        b = b*b;
        p = p/2;
    }
    return x;
}
void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    if(n==1)
    {
        cout <<1<<endl;
        return ;
    }
    m = log2(n);
    if(P(2,m)==n)
    {
        cout <<"-1\n";
        return ;
    }
    cout <<"2 3 1 ";
    for(i=4; i<=n; i++)
    {
        m = log2(i);
        if(P(2,m)==i)
        {
            cout <<i+1<<" "<<i<<" ";
            i++;
        }
        else
            cout <<i<<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

