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

void solve(int t)
{
    int i,j,n,m,k,c=limit,r=limit,ans=0;
    string s;
    cin >> s ;
    char ch=s[0];
    map<pair<int,int>,int >mymap;
    mymap[mp(r,c)] = 1;
    for(i=0; i<s.size(); i++)
    {    //cout <<r<<" "<<c<<" "<<ans<<" "<<mymap[mp(r,c)]<<endl;
        ch = s[i];
        if(ch=='N')
            r--;
        if(ch=='S')
            r++;
        if(ch=='E')
            c++;
        if(ch=='W')
            c--;

        if(mymap[mp(r,c)]) ans++;
        else ans+=5;

        mymap[mp(r,c)] = 1;
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

