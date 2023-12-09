#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
bool vis[limit];
vector<char> v;

void solve(int t)
{
    int i,j,n,m,k;
    string s;
    cin >> s;
    n = s.size();
    char temp='A';
    int ct=0;
    for(i=n-1; i>0; i--)
    {
        if(s[i-1]==s[i] && s[i]>temp)
        {
            vis[i] = 1;
            ct++;
            i--;
        }
        else
        {
            temp = s[i];
            v.pb(s[i]);
        }
    }
    if(n==1 || (n>1 && vis[1]==0))
        v.pb(s[0]);
    reverse(v.begin(),v.end());
    int ans = n-ct*2;
    int sz=v.size();   //cout <<ans<<" "<<sz<<endl;
    for(i=0; i<n; i++)
    {
        if(vis[i])
        {
            ans++;
            cout <<ans+1<<" ";
            cout <<s[i];
            if(ans<=9)
            {
                for(j=max(0,sz-ans); j<sz; j++)
                {
                    cout <<v[j];
                }
                cout <<endl;
            }
            else
            {
                for(j=sz-ans,k=0; k<4; k++,j++)
                    cout <<v[j];
                cout <<"..."<<v[sz-2]<<v[sz-1]<<endl;
            }
            continue;
        }
        cout <<ans<<" ";
        if(ans<=10)
        {
            for(j=max(0,sz-ans); j<sz; j++)
            {
                cout <<v[j];
            }
            cout <<endl;
        }
        else
        {
            for(j=sz-ans,k=0; k<5; k++,j++)
                cout <<v[j];
            cout <<"..."<<v[sz-2]<<v[sz-1]<<endl;
        }
        ans--;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

