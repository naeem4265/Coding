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
int out[limit];

void solve(int t)
{
    int i,j,n,m,k,ct=0;
    cin >> n ;
    int D[n+5];
    vector<int>one,twothree;
    one.pb(0);
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        if(D[i]==1)
            one.pb(i);
        if(D[i]==2 || D[i]==3)
            twothree.pb(i);
    }
    int l = one.size()-1,l2= twothree.size()-1,r = n;
    vector<pair<int,int> >ans;
    int ok=1;
    for(i=n; i>0; i--)
    {
        if(D[i]==0) continue;
        if(D[i]==1)
        {
            ans.pb(mp(r,i));
            out[i] = r;
            r--;
        }
        else if(D[i]==2)
        {
            if(l<0)
            {
                ok=0;
                break;
            }
            if(one[l]<i)
            {
                ok = 0;   //cout <<i<<" f alse \n";
                break;
            }
            ans.pb(mp(out[one[l]],i));
            one.pop_back();
            l--;
        }
        else if(D[i]==3)
        {
            if(l2>=0 && twothree[l2]>i)
            {
                ans.pb(mp(r,i));
                ans.pb(mp(r,twothree[l2]));
                r--;
                twothree.pop_back();
                l2--;
                continue;
            }
            if(l<0)
            {
                ok=0;
                break;
            }
            if(one[l]<i)
            {
                ok = 0;   //cout <<i<<" f alse \n";
                break;
            }
            ans.pb(mp(r,i));
            ans.pb(mp(r,one[l]));
            r--;
            one.pop_back();
            l--;
        }
    }
    if(ok==0)
    {
        cout <<-1<<endl;
        return ;
    }
    i = ans.size();
    cout <<i<<endl;
    for(--i; i>=0; i--)
    {
        cout <<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

