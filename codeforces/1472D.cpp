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
    ll i,j,n,m,k;
    cin >> n ;
    ll a;
    vector<ll> odd,even;
    odd.pb(0);
    even.pb(0);
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a&1) odd.pb(a);
        else even.pb(a);
    }
    i = even.size()-1;
    j = odd.size()-1;
    ll alice=0,bob=0;
    if(j>=0)
        sort(odd.begin(),odd.end());
    if(i>=0)
        sort(even.begin(),even.end());

    for(k=0; ; k++)
    {               //cout <<k<<" "<<i<<" "<<j<<" "<<alice<<" "<<bob<<endl;
        if(i<0 && j<0) break;
        if(i>=0 && j>=0)
        {
            if(k&1)
            {
                if(odd[j]>=even[i])
                {
                    bob += odd[j];
                    j--;
                }
                else
                {
                    i--;
                }
            }
            else
            {
                if(even[i]>=odd[j])
                {
                    alice += even[i];
                    i--;
                }
                else
                {
                    j--;
                }
            }
        }
        else if(i<0 && j>=0)
        {
            if(k&1)
                bob += odd[j];
            j--;
        }
        else if(i>=0 && j<0)
        {
            if(k%2==0)
                alice += even[i];
            i--;
        }
    }
    if(alice>bob)
        cout <<"Alice\n";
    else if(bob>alice)
        cout <<"Bob\n";
    else
        cout <<"Tie\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

