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

void solve(ll tc)
{
    ll i,j,n,m,k,p=0,ok=0;
    string s;
    getline(cin,s);
    n = s.size();
    vector<char> out;
    for(i=0; i<n; i++)
    {
        while(i<n && s[i]==' ') i++;
        if(i>=n)
        {
            cout <<endl;
            return ;
        }
        out.clear();
        for(j=i; j<n; j++)
        {
            if(s[j]==' ') break;
            out.pb(s[j]);
        }
        i = j-1;
        if(out.size()>8)
        {
            if(ok) cout <<endl;
            cout <<"#bigword";
            p = 9;
        }
        else
        {
            if((p+out.size())>7)
            {
                cout <<endl;
                p = 0;
            }
            else if(ok)
            {
                cout <<" ";
                p++;
            }
            for(k=0; k<out.size(); k++) cout <<out[k];
            p  += out.size();
        }ok=1;
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

