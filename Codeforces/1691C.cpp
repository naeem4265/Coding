#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    cin >> s;
    i = 0;
    j = n-1;
    ll l=0,r=n-1;
    while(l<n && s[l]=='1') l++;
    while(r>=0 && s[r]=='1') r--;
    i = l;
    j = r;
    while(i<n && s[i]=='0')  i++;
    while(j>=0 && s[j]=='0')  j--;
    //cout <<i<<" "<<j<<endl;
    while(k)
    {
        while(i<n && s[i]=='0')  i++;
        while(j>=0 && s[j]=='0')  j--;
        if(i>j)  break;  //cout <<i<<" "<<j<<endl;
        if((i-l)<=(r-j) && k>=(i-l))
        {
            ll temp = i;
            while(k && i>l)
            {
                swap(s[i],s[i-1]);
                i--;
                k--;
            }
            l = temp;
            i = temp;
        }
        else if(k>=(r-j))
        {
            ll temp = j;
            while(k && j<r)
            {
                swap(s[j],s[j+1]);
                j++;
                k--;
            }
            r = temp;
            j = temp;
        }
        else
            break;
    }
    ll ans = 0;   //cout <<s<<endl;
    for(i=1; i<n; i++)
    {
        ans += 10LL*(s[i-1]-'0')+s[i]-'0';
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
