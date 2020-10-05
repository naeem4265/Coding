#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 3008
using namespace std;
ll cost[limit][limit];
void solve(int t)
{
    ll r,c,k,i,j,u,v,w,temp,arr[4];
    cin >> r >> c >> k;
    for(i=0; i<k; i++)
    {
        cin >> u >> v >> w;
        cost[u][v]=w;
    }
    if(cost[1][1]==0)
    {
        cout<<0<<endl;
        return ;
    }
    arr[0]=arr[1]=arr[2]=0;
    for(i=1; i<=c; i++)
    {
        temp = cost[1][i];
        if(temp==0 && i!=1)
        {
            for(j=i;j<=c; j++) cost[1][j]=0;
            break;
        }
        if(temp>arr[0])
        {
            temp = temp-arr[0];
            arr[0]=cost[1][i];
            sort(arr,arr+3);
        }
        cost[1][i] = cost[1][i-1]+temp;
    }
    arr[0]=arr[1]=arr[2]=0;
    for(i=1; i<=r; i++)
    {
        temp = cost[i][1];
        if(temp==0 && i!=1)
        {
            for(j=i;j<=r; j++) cost[j][1]=0;
            break;
        }
        if(temp>arr[0])
        {
            temp = temp-arr[0];
            arr[0]=cost[1][i];
            sort(arr,arr+3);
        }
        cost[i][1] = cost[i-1][1]+temp;
    }
    for(i=2; i<=r; i++)
    {
        arr[0]=arr[1]=arr[2]=0;
        for(j=2; j<=c; j++)
        {
            if(cost[i][j]==0 && (i!=r || j!=c))
            {
                arr[0]=arr[1]=arr[2]=0;
                continue;
            }
            temp=0;
            if(cost[i][j]>arr[0])
            {
                temp = cost[i][j]-arr[0];
                arr[0]=cost[i][j];
                sort(arr,arr+3);
            }

            if((cost[i-1][j]+cost[i][j])>=(cost[i][j-1]+temp))
            {
                arr[0]=arr[1]=arr[2]=0;
                arr[0]=cost[i][j];
                sort(arr,arr+3);
                cost[i][j]=cost[i-1][j]+cost[i][j];
            }
            else
            {
                cost[i][j]=cost[i][j-1]+temp;
            }
            if(cost[i-1][j]==0 && cost[i][j-1]==0)
            {
                arr[0]=arr[1]=arr[2]=0;
                cost[i][j]=0;
            }  //cout <<i<<" "<<j<<" "<<cost[i][j]<<endl;
        }
    }
    cout <<cost[r][c]<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


