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

void solve(ll t)
{
    ll i,j,n,m,k,q;
    string s;
    ll rr,cc;
    cin >> rr >> cc;

    cin >> s;

    ll r=0,c=0,ru=0,rd=0,cl=0,cr=0;
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='U')
        {
            r--;
            if( r<ru )
                ru--;
            if( (rd-ru)>=rr )
            {
                ru++;
                cout <<max(1-ru,rr-rd)<<" "<<max(1-cl,cc-cr)<<endl;
                return ;
            }
        }
        if(s[i]=='D')
        {
            r++;
            if( r>rd )
                rd++;
            if( (rd-ru)>=rr )
            {
                rd--;
                cout <<max(1-ru,rr-rd)<<" "<<max(1-cl,cc-cr)<<endl;
                return ;
            }
        }
        if(s[i]=='L')
        {
            c--;
            if( c<cl )
                cl--;
            if( (cr-cl)>=cc )
            {
                cl++;
                cout <<max(1-ru,rr-rd)<<" "<<max(1-cl,cc-cr)<<endl;
                return ;
            }
        }
        if(s[i]=='R')
        {
            c++;
            if( c>cr )
                cr++;
            if( (cr-cl)>=cc )
            {
                cr--;
                cout <<max(1-ru,rr-rd)<<" "<<max(1-cl,cc-cr)<<endl;
                return ;
            }
        }   //cout <<i<<" "<<r<<" "<<c<<" "<<rd<<" "<<cr<<endl;
    }
    cout <<max(1-ru,rr-rd)<<" "<<max(1-cl,cc-cr)<<endl;

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
