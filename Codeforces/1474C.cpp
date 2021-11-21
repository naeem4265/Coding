#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
    ll D[limit],cnt[limit];

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    vector<ll>vec;
    vec.clear();

    for(i=0; i<2*n; i++)
    {
        cin >> D[i];
        vec.pb(D[i]);
    }
    sort(D,D+2*n);
    sort(vec.begin(),vec.end());

    for(i=0; i<2*n-1; i++)
    {
        for(j=0; j<2*n; j++)
        {
            cnt[D[j]] = 0;
        }
        for(j=0; j<2*n; j++){
            cnt[D[j]]++;
        }
        ll temp = D[2*n-1],ok=1;
        cnt[D[2*n-1]]--;
        cnt[D[i]]--;

        for(j=2*n-2; j>=0; j--)
        {
            if(cnt[D[j]]==0) continue;
            temp = temp - D[j];
            cnt[D[j]]--;
            ll l=0,h=2*n-1,m;
            while(l<=h)
            {
                m = (l+h)/2;
                if(vec[m]==temp) break;
                if(vec[m]<temp)
                    l = m+1;
                else
                    h = m-1;
            }

            if(l>h || cnt[temp]<=0)
            {
                ok = 0; // cout <<i<<" "<<j<<' '<<temp<<" "<<D[j]<<" "<<l<<" "<<h<<"  "<<cnt[temp]<<" "<<cnt[j]<<endl;
                break;
            }
            cnt[temp]--;
            temp = D[j];
        }
        if(ok==0) continue;

        cout <<"YES\n";
        cout <<D[i]+D[2*n-1]<<endl;
        cout <<D[i]<<" "<<D[2*n-1]<<endl;

        for(j=0; j<2*n; j++) cnt[D[j]]=0;
        for(j=0; j<2*n; j++) cnt[D[j]]++;

        cnt[D[2*n-1]]--;
        cnt[D[i]]--;
        temp = D[2*n-1];

        for(j=2*n-2; j>=0; j--)
        {
            if(cnt[D[j]]==0) continue;

            temp = temp - D[j];
            cout <<temp<<" "<<D[j]<<endl;
            cnt[D[j]]--;
            cnt[temp]--;
            temp = D[j];
        }
        return;
    }

    cout <<"NO\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

