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

void solve(ll n,ll t)
{
    cout <<"Case "<<t<<":\n";
    ll i,j,m,k;
    string s;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    //sort(d,d+n);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((d[j]-d[i])!=(j-i))
                break;
        }
        cout <<0<<d[i];
        if(j-i==1){
            cout <<endl;
            continue;
        }
        ll ind;
        string s1=to_string(d[i]),s2=to_string(d[j-1]);
        i = j-1;
        for(k=s1.size()-1,j=s2.size()-1; k>=0; k--,j--)
        {
            if(s1[k]!=s2[j])
                ind = j;
        }
        cout <<"-";
        for(j=ind; j<s2.size(); j++)   cout <<s2[j];
        cout <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t=1,tt=1;
    while(1)
    {
        cin >> tt;
        if(tt==0) break;
        solve(tt,t++);
    }
    return 0;
}
