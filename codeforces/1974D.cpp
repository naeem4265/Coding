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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n ;
    cin >> s;
    ll cnt[30];
    memset( cnt, 0, sizeof( cnt ));
    string t = "WENS";
    for(i=0; i<n; i++ ) {
        cnt[s[i]-'A']++;
    }
    if( (cnt[t[0]-'A'] + cnt[t[1]-'A'])&1 ||  (cnt[t[2]-'A'] + cnt[t[3]-'A'])&1 )  {
        cout << "NO" <<endl;
        return;
    }
    if( cnt[t[0]-'A']==1 && cnt[t[1]-'A']==1 && (cnt[t[2]-'A'] + cnt[t[3]-'A']) ==0 )  {
        cout << "NO" <<endl;
        return;
    }
    if( cnt[t[2]-'A']==1 && cnt[t[3]-'A']==1 && (cnt[t[0]-'A'] + cnt[t[1]-'A']) ==0 )  {
        cout << "NO" <<endl;
        return;
    }
    ll PW = 0, HW = 0, PN = 0, HN = 0;
    for(i =0;  i< n; i++ ) {

            if( s[i]==t[0] ) {
                if( PW <= HW )   {
                    cout <<"P";
                    PW++;
                } else {
                    cout <<"H";
                    HW++;
                }
            } else if( s[i]==t[1] ) {
                if( PW > HW )   {
                    cout <<"P";
                    PW--;
                } else {
                    cout <<"H";
                    HW--;
                }
            } else if( s[i]==t[2] ) {
                if( PN <= HN )   {
                    cout <<"P";
                    PN++;
                } else {
                    cout <<"H";
                    HN++;
                }
            } else {
                if( PN > HN )   {
                    cout <<"P";
                    PN--;
                } else {
                    cout <<"H";
                    HN--;
                }
            }
            cnt[s[i]-'A']--;
    }
    cout <<endl;
    return;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
