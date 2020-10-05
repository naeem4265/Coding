#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
using namespace std;
vector<bool>out;
void solve(int t)
{
    int i,j,n,m,k,one=0,zero=0,ans=0;
    cin >> n;
    bool D[n+5];
    for(i=0; i<n+5; i++)
    {
        D[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
    }
    if(n==2)
    {
        if(D[0]==D[1])
            cout <<2<<endl<<D[0]<<' '<<D[1]<<endl;
        else
            cout<<1<<endl<<0<<endl;
        return ;
    }
    bool temp=D[1];
    out.clear();
    for(i=2; i<=n; i++)
    {
        if(D[i]==temp)
        {
            out.pb(temp);
            out.pb(temp);
            temp = D[i+1];
            i++;
        }
    }
    if(out.size()>=n/2)
    {
        cout <<out.size()<<endl;
        for(i=0; i<out.size(); i++)
            cout <<out[i]<<' ';
        cout <<endl;
        return ;
    }
    temp = D[n];
    out.clear();
    for(i=n-1; i>0; i--)
    {
        if(D[i]==temp)
        {
            out.pb(temp);
            out.pb(temp);
            temp = D[i-1];
            i--;
        }
    }
    if(out.size()>=n/2)
    {
        cout <<out.size()<<endl;
        for(i=0; i<out.size(); i++)
            cout <<out[i]<<' ';
        cout <<endl;
        return ;
    }
    for(int k=1; k<n; k++)
    {
        temp = D[k];
        cout.clear();
        for(i=k+1; i<=n; i++)
        {
            if(D[i]==temp)
            {
                out.pb(temp);
                out.pb(temp);
                temp = D[i+1];
                i++;
            }
        }
        if(out.size()>=n/2)
        {
            cout <<out.size()<<endl;
            for(i=0; i<out.size(); i++)
                cout <<out[i]<<' ';
            cout <<endl;
            return ;
        }
        temp = D[n-k];
        out.clear();
        for(i=n-k-1; i>0; i--)
        {
            if(D[i]==temp)
            {
                out.pb(temp);
                out.pb(temp);
                temp = D[i-1];
                i--;
            }
        }
        if(out.size()>=n/2)
        {
            cout <<out.size()<<endl;
            for(i=0; i<out.size(); i++)
                cout <<out[i]<<' ';
            cout <<endl;
            return ;
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

