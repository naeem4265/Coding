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
    cin >> n;
    ll aw=1,ab=0,bw=0,bb=0;
    n--;
    bool black=1;
    for(i=2; n ; i++)
    {
        m = min(n,i);
        if((i/2)&1){
            if(black)
            {
                bb += (m+1)/2;
                bw += m/2;
            }
            else
            {
                bw += (m+1)/2;
                bb += m/2;
            }
        }
        else{
            if(black)
            {
                ab += (m+1)/2;
                aw += m/2;
            }
            else
            {
                aw += (m+1)/2;
                ab += m/2;
            }
        }

        if(i&1)   black ^= 1;
        n -= min(n,i);
    }
    cout << aw<<" "<<ab<<" "<<bw <<" "<<bb<<endl;

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

