#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> s;
    n = 2LL*s.size();
    m = s.size();
    ll ans = 0;
    for(i=0; i<m; )
    {
        j = i+1;
        if(s[i%m]=='1')
        for(j=i+1; j<n; j++)
        {
            ll d = j-i+1;       //cout <<i<<" "<<j<<" "<<d<<endl;
            if(d%2==0)   ans = max(ans, (d/2)*(d/2));
            else    ans = max(ans, (d/2)*(d+1)/2);
            if(s[j%m]=='0')
            {
                break;
            }
        }
        i = j;
    }

    sort(s.begin(), s.end());
    if(s[0]==s[m-1] && s[0]=='1')   ans = m*m;
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

