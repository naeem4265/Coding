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
ll dp[205][205][205];
ll n,m;
string s,s2;
ll rec(ll pos,ll Move, ll cnt,ll call)
{                     cout <<pos<<" start "<<Move<<" "<<cnt<<" "<<dp[pos][Move][cnt]<<' '<<call<<endl;
    if(pos==n) return 0;
    if(dp[pos][Move][cnt]!=-1) return dp[pos][Move][cnt];

    dp[pos][Move][cnt] = max(max(Move<m?rec(pos+1,Move+1,cnt+(s2[0]==s2[1]),3)+cnt:0LL,
                                Move<m?rec(pos+1,Move+1,cnt+1,2)+cnt*(s2[0]==s2[1]):0LL),
                            rec(pos+1,Move,cnt+(s[pos]==s2[0]),1)+cnt*(s[pos]==s2[1]));
                cout <<pos<<" end "<<Move<<" "<<cnt<<" "<<dp[pos][Move][cnt]<<endl;
    return dp[pos][Move][cnt];
}
void solve(int t)
{
    ll i,j;
    cin >> n >> m;
    cin >> s >> s2;
    memset(dp,-1,sizeof(dp));
    cout <<rec(0,0,0,0)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

/*
200 0
bbbbaaaccacdddeebdbddaadeedcbbdcaedccebcbbabccecacaaacdcaeaaaadaadbaabbeceecacdadebdddadeeadeedccdaaaeeabdbaabeccbedcaaccbbdbabbcdbdbcadeceadaacaaaabaadedecaaaabceeecadbaaacceedddddddddddddddddddddddd
cd
*/
