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
    ll i,j,n,m,k, r;
    char ch;
    cin >> ch;
    cin >> r;
    for(i=1; i<r; i++)    cout <<ch<<i<<endl; 
    for(i=r+1; i<9; i++)    cout <<ch<<i<<endl; 
    for(char i='a'; i<ch; i++)    cout << i <<r<<endl;
    for(char i=ch+1; i<'i'; i++ )     cout <<i<<r<<endl;
    return ;
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
