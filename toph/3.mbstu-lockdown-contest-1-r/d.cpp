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

void solve()
{
    int a,k,i,j,n,m,sz=0,mx=0,ind,ct=0,ck=1;
    cin >>n >> m;
    vector<int>out;
    getchar();
    for(i=0; i<2*n; i++)
    {
        ct=0;
        char s[10001];
        scanf(" %[^\t\n]s",&s);
        //sz=s.size();
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]<='z' && s[j] >='a')
                ct++;
        }
        out.pb(ct);  //cout <<ct<<endl;
    }
    sort(out.begin(),out.end());
    ct=0;
    for(i=0,j=2*n-1; i<2*n; i++)
    {
        for(; j>i; j--)
        {
            if((out[i]+out[j])<=m)
            {
                ct++;//cout <<ct<<endl;
                i++;
                continue;
            }
        }
    }
    if((out[2*n-1]>m) || (2*n-ct)>n) ck=0;
    if(ck)
        cout <<"YES\n";
    else
        cout <<"NO\n";
}
int  main()
{
//    Fast
//    Freed
//    Fout
  //  TC
        solve();
  return 0;
}

