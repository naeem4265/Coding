#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s,t;
    cin >> n;
    cin >> s;
    t = s;
    while(1)
    {
          //cout <<s<<" "<<t<<endl;
        bool ok=1;
        for(i=0; i<=9; i++)
        {
            s = t;
            n = s.size();
            t = "";
            for(j=0; j<n-1; j++)
            {
                if((s[j]-'0')==i && (s[j+1]-'0')==(i+1)%10)
                {
                    if(i==8)
                        t +="0";
                    else if(i==9)
                        t += '1';
                    else
                        t += '0'+(i+2);
                    j++;
                    ok = 0;
                }
                else
                    t += s[j];  //cout <<s<<" "<<j<<" "<<t<<endl;
            }
            if(j==n-1)  t += s[j];
        }
        if(ok)
        {
            cout <<"Case #"<<tt<<": "<<s<<endl;
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
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
