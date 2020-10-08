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
int dsum[limit];

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    n = n/2;
    int s,e=1;
    while(n)
    {
        e = e*10;
        n--;
    }
    for(j=0; j<e+5; j++)
    {
        dsum[j] = dsum[j/10] + j%10;         // cout <<i<<' '<<j<<" "<<s<<" "<<ct<<endl;
    }
    ll ct=0;
    for(i=0; i<e; i++)
    {
        s = i;
        int sum=0;
        while(s)
        {
            sum += s%10;
            s /= 10;
        }
        s = 8;
        for(j=0; j<e; j++)
        {
            if(sum==dsum[j])
                ct++;
        }
    }
    cout <<ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

//Accepted
