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

void solve(int t)
{
    int i,j,n,m;
    cin >> n;
    bool A[n+5];
    A[0]=1;
    A[n+1]=1;
    for(i=1; i<=n; i++)
        cin >> A[i];

    int temp = 1,ct,mxeven=0,mxodd=0,ck=0;
    for(i=1; i<=n+1; i++)
    {
        if(A[i]==1)
        {
            ct = i-temp;  //cout <<i<<" "<<temp<<" "<<ct<<endl;
            if(ct&1 && ct==mxodd)
            {
                ck = 1;
            }
            if(ct&1 && ct>mxodd)
            {
                mxodd=ct;
                ck = 0;
            }
            if(ct%2==0 && ct>mxeven)
                mxeven=ct;
            temp = i+1;
        }
    }
    mxodd = (mxodd+1)/2;           //cout <<mxeven<<" "<<mxodd<<endl;
    if(mxeven>=mxodd || ck)
        cout <<"No\n";
    else
        cout <<"Yes\n";
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

