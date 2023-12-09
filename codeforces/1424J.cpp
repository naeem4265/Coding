#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);

#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
bool vis[limit];
vector<int>pr;
int out[limit];

void seive()
{
    int i,j;
    for(i=3; i*i<=limit; i+=2)
    {
        for(j=i*i; j<limit; j+=2*i)
            vis[j] = 1;
    }
    pr.pb(2);
    for(i=3; i<limit; i+=2)
        if(vis[i]==0)
            pr.pb(i);
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    seive();
    memset(vis,0,sizeof(vis));

    int temp = 0,ans=0,i,j;
    for(i=1; i<limit; i++)
    {
        if(i==pr[temp]*pr[temp])
        {
            vis[pr[temp]] = 1;
            temp++;
            ans--;
        }
        else
        {
            int n,ok=0;
            n = i;
            for(j=0; n>=pr[j]*pr[j]; j++)
            {
                int ck=0;
                while(n%pr[j]==0)
                {
                    ck=1;
                    n /= pr[j];  //cout <<pr[j]<<" "<<vis[pr[j]]<<" here "<<n<<endl;
                }
                if(ck && vis[pr[j]])
                {
                    ok=1;
                    break;
                }
            }
            if(vis[n])
                    ok=1;  //cout <<ok<<" okkk "<<ans<<endl;
            if(ok==0)
                ans++;
        }
        out[i] = ans;  //cout <<i<<" "<<ans<<endl;
    }
    int t,tt=1,n;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
    {
        scanf("%d",&n);
        printf("%d\n",out[n]);
    }
    return 0;
}

