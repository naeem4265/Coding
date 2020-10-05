#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long
#define pb push_back
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector <int> fre[30];
int BS(int p,int key)
{
    int lo=0,hi=fre[p].size()-1,mid,ans=Mod;
    while(lo<=hi)
    {
        mid =(lo+hi)/2; //cout <<lo<<" "<<hi<<' '<<fre[p][mid]<<" "<<key<<endl;
        if(key>=fre[p][mid])
            lo=mid+1;
        else
        {
            hi=mid-1;
            ans=min(ans,fre[p][mid]);
        }
    }
    return ans;
}
void solve()
{
    int a,k,i,j,n,q,sum=0,mx=0,ind,ct=1;
    string s;
    cin >> n;
    cin >> s;
    for(i=0; i<n; i++)
    {
        fre[s[i]-'a'].pb(i);
    }
    cin >> q;

    while(q--)
    {
        cin >> s;
        int cur=-1,sz,ck;
        sz=s.size();
        for(i=0; i<sz; i++)
        {
            cur=BS(s[i]-'a',cur); // cout <<cur<<" "<<i<<endl;
            if(cur==Mod)
            {
                cout <<"NO\n";
                break;
            }
        }
        if(i>=sz) cout <<"YES\n";
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
//    TC
        solve();
  return 0;
}

