#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int n,int t)
{
    int i,j,m,a,k=1;
    map<int,int>mymap;
    queue<int> SQ,Q[n+2];
    for(i=1; i<=n; i++)
    {
        cin >> m;
        for(j=0; j<m; j++)
        {
            cin >> a;
            mymap[a]=i;
        }
    }
    cout <<"Scenario #"<<t<<endl;
    while(1)
    {
        string s;
        cin >> s;
        if(s=="STOP")
        {
            cout <<endl;
            break;
        }
        else if(s=="ENQUEUE")
        {
            cin >> a;
            m = mymap[a];
            Q[m].pb(a);
            if(Q[m].size()==1)
            {
                SQ.pb(m);
            }
        }
        else
        {
            m = SQ.front();
            cout <<Q[m].front()<<endl;
            Q[m].pop();
            if(Q[m].size()==0)
                SQ.pop();
        }
    }
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    for(t=1; ; t++)
    {
        cin >> tt;
        if(tt==0) break;
        solve(tt,t);
    }
    return 0;
}

