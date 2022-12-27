#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    string s;
    cin >> s;

    ll one = -1, zero = -1,left, right;
    for(i=0,j=2; i<n-1; i++,j++)
    {
        if(s[i] == '1' )
        {
            one = i+1;
        }
        else
        {
            zero = i+1;
        }
        left = max(1, j-zero);
        right = min(j, one+1);
        cout << max(1, right-left+1)  <<" ";
            //cout<<endl <<i<<" "<<one<<" "<<zero<<" "<<left<<" "<<right<<endl;
    }
    cout <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

