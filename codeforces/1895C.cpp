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
    string s[n+5];
    for(i=0; i<n; i++)   cin >> s[i];
    ll ans = 0;
    ll ace[6][60];
    memset(ace, 0, sizeof(ace));

    for(i=0; i<n; i++){
        ll totalSum=0,totalLen=s[i].size();
        for(j=0; j<totalLen; j++){
            totalSum += s[i][j]-'0';
        }
        ace[totalLen][totalSum]++;
    }

    for(i=0; i<n; i++){
        ll totalSum=0,totalLen=s[i].size();
        for(j=0; j<totalLen; j++){
            totalSum += s[i][j]-'0';
        }
        ll sum = 0;
        for(j=0,k=totalLen-1; j<totalLen; j++,k--){
            sum += s[i][j]-'0';
            if(j>=k && sum*2LL>=totalSum){
                ans += ace[j+1-k][sum*2LL-totalSum];
            }
        }
        sum = 0;
        for(j=totalLen-1,k=0; j>0; j--,k++){
            sum += s[i][j]-'0';
             if(j<=k && sum*2LL>=totalSum){
                ans += ace[k+1-j][sum*2LL-totalSum];
            }
        }             //  cout <<i<<" "<<ans<<endl;
    }
    cout << ans <<endl;



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
