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

void solve(int t)
{
    int i,j,n,m,k,l=0;
    cin >> n >> k;
    string s;
    cin >> s;
    while(l<n)
    {
        if(s[l]=='I')
            break;
        l++;
    }
    ll ans=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='M' && l<i)
        {
            ll cost=0;
            for(j=i-1; j>l; j--)
            {
                if(s[j]=='X')
                {
                    cost = Mod;
                    break;
                }
                if(s[j]==':') cost++;
            }
            cost += i-l;
            cost = k+1-cost;
            while(++l<n)
            {
                if(s[l]=='I')
                    break;
            }
            if(cost>0)
            {
                ans++;
            }    //cout <<i<<" one "<<cost<<" "<<l<<" "<<ans<<endl;
            else
                i--;
        }
        else if(s[i]=='M' && l>i && l<n)
        {
            ll cost=0;
            for(j=i+1; j<n && j<l; j++)
            {
                if(s[j]=='X')
                {
                    i=j;
                    cost = Mod;
                    break;
                }
                if(s[j]==':') cost++;
            }
            cost += l-i;
            cost = k+1-cost;
            if(cost>0)
            {
                while(++l<n)
                {
                    if(s[l]=='I')
                        break;
                }
                ans++;
            }    //cout <<i<<" two "<<cost<<" "<<l<<" "<<ans<<endl;
        }
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

