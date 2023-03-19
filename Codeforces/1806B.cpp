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

ll d[limit],cnt[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        cnt[d[i]]++;
    }
    ll ct = n-cnt[0];
    if(ct>=(n/2))
    {
        cout <<0<<endl;
    }
    else if((cnt[0]+cnt[1])<n || !cnt[1])
    {
        cout <<1<<endl;
    }
    else
    {
        cout <<2<<endl;
    }
    for(i=0; i<n; i++)
    {
        cnt[d[i]]--;
    }
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

