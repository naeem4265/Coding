#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
long long int limit = 1000009;
using namespace std;
long long int i,j,k;
bool vis[1000009];

void seive()
{
    vis[0] = vis[1] = 1;
    for(i=4; i<limit; i+=2)
    {
            vis[i] = 1;
    }
    for(i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    char s[8], t[8];
    scanf("%s", s);
    n = strlen(s);


    if(n==7)
    {
        printf("yes\n");
        return;
    }
    for(i=0; i<n; i++)   t[i] = s[i];
    for(i=0; i<n; i++)
    {
        j = 0;
        if(i==0)    j = 1;
        for(; j<10; j++)
        {
            t[i] = j+'0';
            m = 0;
            for(k=0; k<n; k++)
            {
                m = m*10+(t[k]-'0');
            }

            if(vis[m]==0)
            {
                printf("yes\n");
                return;
            }
        }
        t[i] = s[i];
    }
    printf("no\n");

    return ;
}


int  main()
{
    //Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

