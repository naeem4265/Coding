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
    int i,j,n,m,l,r,a;
    cin >> n >> m;

    int point[n+5];
    point[0]=0;
    point[n+1]=m;
    for(i=1; i<=n; i++)
    {
        cin >> point[i];
    }
    double sp=1.0;
    double ltime[n+5],lsp[n+5];
    ltime[0]=0;
    lsp[0]=1;
    for(i=1; i<=n; i++)
    {
        double d = (double)(point[i]-point[i-1]);
        ltime[i] = ltime[i-1]+d/sp;   //cout <<i<<" "<<ltime[i]<<endl;
        sp += 1.00;
        lsp[i] = sp;
    }
    sp = 1.0;
    double rtime[n+5],rsp[n+5];
    rtime[n+1]=0;
    rsp[n+1]=1;
    for(i=n; i>0; i--)
    {
        double d = (double)(point[i+1]-point[i]);
        rtime[i] = rtime[i+1]+d/sp;   //cout <<i<<" "<<rtime[i]<<endl;
        sp += 1.00;
        rsp[i] = sp;
    }
    l=0;
    while(ltime[l+1]<=rtime[l+1])
    {
        l++;
        //cout <<l<<" "<<ltime[l]<<" llrr "<<rtime[l]<<endl;
    }
    r=n+1;
    while(ltime[r-1]>=rtime[r-1])
    {
        r--;
    }
    if(l==r)
    {
        printf("%.15lf\n",ltime[l]);
        return ;
    }    //cout <<l<<" "<<r<<" "<<ltime[l]<<endl;
    double x=point[r]-point[l];  //cout <<l<<" "<<r<<" "<<point[l]<<" "<<point[r]<<endl;
    if(ltime[l]>rtime[r])
    {
        double t=ltime[l]-rtime[r];
        x = x-t*rsp[r];
        printf("%.15lf\n",ltime[l]+x/(lsp[l]+rsp[r]));
        return;
    }
    else if(ltime[l]<rtime[r])
    {
        double t=rtime[r]-ltime[l];
        x = x-t*lsp[l];
        printf("%.15lf\n",rtime[r]+x/(lsp[l]+rsp[r]));
        return ;
    }

    printf("%.15lf\n",ltime[l]+x/(lsp[l]+rsp[r]));

      // cout <<l<<" llll "<<r<<" "<<x<<" "<<ltime[l]<<" "<<rtime[r]<<" "<<lsp[l]<<" "<<rsp[r]<<endl;

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

