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

struct st
{
    int pos, x;
};
bool operator<(st a,st b)
{
    return a.pos<b.pos;
}

void solve(int t)
{
    int i,j=0,n,m,k,ok=1,x,pos=0,ck=0;
    cin >> n ;
    char ch[2*n+5];
    vector<int> temp;
    int out[n+5],cur=0,ct=0;
    for(i=0; i<2*n; i++)
    {
        cin >> ch[i];
        if(ch[i]=='+')
        {
            ck = 1;
            pos++;
            out[ct]=Mod;
            ct++;
            cur++;
            temp.clear();
            if(temp.size())
                temp.pop_back();
        }
        else
        {
            pos--;
            cin >> x;
            int sz = temp.size();
            if(sz)
            {
                if(temp[sz-1]>x)
                    ok = 0;
            }
            if(ck)
                j = ct;
            while( j && out[--j]!=Mod)
            {
                if(out[j]>x) ok=0;
            }
            j = max(0,j);
            out[j] = x;
            temp.pb(x);
            ck = 0;
        }
        if(pos<0) ok=0;        //cout <<i<<" "<<ok<<endl;
    }
    if(ok && pos==0)
    {
        cout <<"YES\n";
        for(i=0; i<n; i++)
        {
            cout <<out[i]<<" ";
        }
        cout <<endl;
    }
    else
        cout <<"NO\n";
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

