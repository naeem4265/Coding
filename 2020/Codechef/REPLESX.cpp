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
    int i,j,n,x,p,k,ct=0;
    cin >> n >> x >> p >> k ;
    int A[n+2];
    for(i=1; i<=n; i++)
        cin >> A[i];
    sort(A+1,A+n+1);
    if(A[p]==x)
    {
        cout <<0<<endl;
        return ;
    }
    if(k>p)
    {
        if(A[p]<x)
        {
            cout <<-1<<endl;
            return ;
        }
        for(i=p; i>0; i--)
        {
            if(A[i]<=x)
                break;
            ct++;
        }
        cout <<ct<<endl;
    }
    else if(k<p)
    {
        if(A[p]>x)
        {
            cout <<-1<<endl;
            return;
        }
        for(i=p; i<=n; i++)
        {
            if(A[i]>=x)
                break;
            ct++;
        }
        cout <<ct<<endl;
    }
    else
    {
        if(A[p]>x)
        {
            for(i=p; i>0; i--)
            {
                if(A[i]<=x)
                    break;
                ct++;
            }
            cout <<ct<<endl;
        }
        else
        {
            for(i=p; i<=n; i++)
            {
                if(A[i]>=x)
                    break;
                ct++;
            }
            cout <<ct<<endl;
        }
    }
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

