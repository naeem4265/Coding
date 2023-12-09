#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+2;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> divi[limit];
ll col[limit];
bool chosen[limit][27];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        col[i] = -1;
        for(j=0; j<27; j++)   chosen[i][j] = 0;
    }
    m = divi[n].size();
    for(i=1; i<=n; i++)
    {
        for(j=0; j<27; j++)
        {
            if(chosen[i][j]==0)
            {
                col[i] = j;
                break;
            }
        }
        chosen[i+1][col[i]] = 1;
        for(j=0; j<m; j++)
        {
            ll u = divi[n][j];
            if((i+u)>n)  break;
            chosen[i+u][col[i]] = 1;
        }
    }
    for(i=1; i<=n; i++)
    {
        char ch = 'a'+col[i];
        printf("%c", ch);
    }
    printf("\n");

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    for(ll i=2; i<limit; i++)
    {
        for(ll j=i+i; j<limit; j+= i)
        {
            divi[j].pb(i);
        }
    }
//    ll sz=0;
//    for(ll i=1; i<limit; i++)   if(sz<divi[i].size())  sz = divi[i].size();         cout << sz <<endl;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
