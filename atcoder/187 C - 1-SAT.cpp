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
    string s,t="satisfiable";
    map<string,bool>mymap;
    for(i=0; i<n; i++)
    {
        cin >> s;
        mymap[s]=1;
        if(s[0]=='!')
        {
            s.erase(s.begin()+0);  //cout <<s<<endl;
            if(mymap[s])
                t = s;
        }
        else
        {
            s = "!"+s;   //cout <<s<<endl;
            if(mymap[s])
            {
                s.erase(s.begin()+0);
                t = s;
            }
        }
    }
    cout <<t<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}


