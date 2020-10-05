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
int out[limit];

void solve(int t)
{
    int i,j,n,m;
    cin >> n;
    int D[n+5];
    for(i=1; i<=n; i++)
        cin >> D[i];
    stack<pair<int,int> > stk;
    pair<int,int> z;
    for(i=n; i>0; i--)
    {
        while(1)
        {
            if(stk.empty())
                break;
            z = stk.top();
            if(z.first<=D[i])
                break;
            out[z.second] = D[i];
            stk.pop();
        }
        stk.push(mp(D[i],i));    //cout<<i<<" "<<stk.size()<<endl;
    }
    while(!stk.empty())
    {
        z = stk.top();
        stk.pop();
        out[z.second] = -1;
    }
    for(i=1; i<=n; i++)
    {
        if(i!=1)
            cout<<" ";
        cout <<out[i];
    }
    cout <<"\n";
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


