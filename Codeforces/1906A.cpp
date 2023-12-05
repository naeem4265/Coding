#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;
string ans, s[3];
bool vis[3][3];
ll fx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
ll fy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
 
bool isValid(ll x, ll y) {
    if( x<0 || x>2 || y<0 || y>2 || vis[x][y])   return 0;
    return 1;
}

void rec(ll x, ll y, string temp) {
    if( temp.size()==3 ) {
        ans = min(ans, temp);
        return; 
    }
    vis[x][y] = 1;
    for(ll i=0; i<8; i++ ) {
        ll r = x+fx[i], c = y+fy[i];
        if( isValid(r, c)==0 )   continue;
        rec(r, c, temp+s[x][y]);
    }
    vis[x][y] = 0;
}
void Please_AC(ll tt)
{
    ans = "ZZZ";     //cout << ans <<endl;
    cin >> s[0] >> s[1] >> s[2];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            rec(i,j, "");
        }
    }

    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
