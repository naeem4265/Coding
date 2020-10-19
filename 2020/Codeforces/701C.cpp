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
int cum[130];

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    string s;
    cin >> s;
    set<char>st;
    for(i=0; i<n; i++)
    {
        st.insert(s[i]);
    }
    int ans=n,ct=0,l=0,sz=st.size();
    for(i=0; i<n; i++)
    {
        if(cum[s[i]]==0)
            ct++;
        cum[s[i]]++;
        while(ct==sz)
        {
            ans = min(ans,i-l+1);
            cum[s[l]]--;
            if(cum[s[l]]==0)
                ct--;
            l++;
        }
    }
    cout <<ans <<endl;
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

