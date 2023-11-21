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
    cin >> n;
    ll a[n+5];
    for(i=1; i<n; i++){
        cin >> a[i];
    }
    bool vis[2LL*n+5];
    memset(vis, 0, sizeof(vis));

    for(i=0; i<n; i++){
        ll Xor = 0;
        for(j=i+1; j<n; j++){
            Xor = Xor^a[j];
            if(vis[Xor] || Xor>=n)
                break;
            vis[Xor] = 1;
        }
        Xor = 0;
        for(k=i; k>0; k--){
            Xor = Xor^a[k];
            if(vis[Xor] || Xor>=n)
                break;
            vis[Xor] = 1;
        }
        if(j<n || k>0){
            Xor = 0;
            for(j=i+1; j<n; j++){
                Xor = Xor^a[j];
                if(vis[Xor]==0)
                    break;
                vis[Xor] = 0;
            }
            Xor = 0;
            for(k=i; k>0; k--){
                Xor = Xor^a[k];
                if(vis[Xor]==0)
                    break;
                vis[Xor] = 0;
            }
        }
        else{
            cout <<Xor<<" ";
            for(i=1; i<n; i++){
                Xor = Xor^a[i];
                cout <<Xor<<" ";
            }
            cout <<endl;
            return;
        }
    }

    cout <<-1<<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
