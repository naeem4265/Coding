#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ///solution is valid only for random test case generator. otherwise TLE
    ll i,j,k,n,m;
    string s;
    cin >> n;
    cin >> s;
    reverse(s.begin(), s.end());
    while( !s.empty() && s.back()=='0')   s.pop_back();
    reverse(s.begin(), s.end());
    n = s.size();

    if( !n )
    {
        cout <<0<<endl;
        return ;
    }
    for(i=1; i<n; i++)
    {
        if(s[i]=='0')  break;
    }
    if( i==n )
    {
        cout << s <<endl;
        return ;
    }

    string ans=s;
    for(j=0; j<i; j++)
    {
        string temp = s;
        for(ll l=j,k=i; k<n; k++,l++)
        {
            if(s[l]=='1' && s[k]=='0')
                temp[k] = '1';
        }
        ans = max(ans, temp);
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
