#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
bool State(int a,int b,int n)
{
    if(n%(a+b)>=0 && n%(a+b)<a)
        return 1;
    else
        return 0;
}
void solve(int n,int t)
{
    int i,j,m;
    int A[n+2],B[n+2],C[n+2];
    bool ps[limit][n+2];
    for(i=0; i<n; i++)
    {
        cin >> A[i] >> B[i] >> C[i];
    }
    int ct=0;
    for(j=0; j<n; j++)
    {
        bool ok = State(A[j],B[j],C[j]-1);
        if(ok)
            ps[0][j] = 1;
        else
            ps[0][j] = 0;
        if(ok) ct++;
    }
    cout <<"Case "<<t<<": ";
    if(ct==n)
    {
        cout <<"1"<<endl;
        return ;
    }
    for(i=1; i<limit; i++)
    {
        for(j=0; j<n; j++)
        {
            bool ok = State(A[j],B[j],C[j]+i-1);  //cout <<i<<" "<<j<<" "<<ok<<endl;
            if((ps[i-1][j] && !ok) && ct>=(n+1)/2)
                ps[i][j] = 1;
            else
                ps[i][j] = ok;
        }
        ct = 0;
        for(j=0; j<n; j++)
        {
            if(ps[i][j]) ct++;
        }
        if(ct==n)
        {
            cout <<i+1<<endl;
            return ;
        }
    }
    cout <<-1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t=1,tt=1;
    while(1)
    {
        cin >> tt;
        if(tt)
            solve(tt,t++);
        else
            return 0;
    }
    return 0;
}


