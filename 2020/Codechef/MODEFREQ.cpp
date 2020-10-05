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
int ct[15],original[15];
void solve(int t)
{
    int i,j,n,m,a;
    cin >> n;
    vector<int> out;
    for(i=0; i<12; i++)
        ct[i]=0;
    for(i=0; i<n; i++)
    {
        cin >> a;
        ct[a]++;
        original[a]++;
    }
    ct[11]=100000000;
    sort(ct,ct+11);
    int mx = 0,temp=0;
    for(i=2; i<=11; i++)
    {   //cout <<ct[i]<<" "<<i<<endl;
        if(ct[i]==0)
        {
            temp = i+1;
            continue;
        }
        if(ct[i]!=ct[i-1] && ct[i-1]!=0)
        {
            out.pb(i-temp);   //cout <<i-temp<<endl;
            temp = i;
        }
    }
    sort(out.begin(),out.end());
    mx = out[out.size()-1];
    for(i=1; i<11; i++)
    {           cout <<i<<" "<<mx<<endl;
        if(original[i]==mx)
        {
            cout <<i<<endl;
            return ;
        }
    }
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

