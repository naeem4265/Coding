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
    int a,k,i,j,n,mx=0,sz=1,sum=0;
    cin >> n;
    string s[n+2],key;
    for(i=0; i<n; i++)
        cin >> s[i];
    cin >> key;
    vector <int> out;
    for(i=0; i<n; i++)
    {
        sz = key.size()-1;
        for(j=s[i].size()-1; j>=0; j--)
        {   //cout <<i<<" "<<j<<" "<<sz<<endl;
            if(key[sz]==s[i][j])
                sz--;
            if(sz<0)
            {
                out.pb(i+1);
                break;
            }
        }
    }
    cout <<"Case "<<t<<":\n";
    sz = out.size();
    if(!sz)
    {
        cout<< "No files found!\n";
        return;
    }
    sz--;
    for(i=0; i<=sz; i++)
    {
        cout <<out[i];
        if(i!=sz)
            cout <<" ";
    }
    cout <<endl;
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


