#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("consistency_chapter_2_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll cost[28][28];

ll floyd()
{
    ll i,j,k;
    for(k=0; k<26; k++)
    {
        for(i=0; i<26; i++)
        {
            for(j=0; j<26; j++)
            {
                if( cost[i][j] > cost[i][k]+cost[k][j] )
                    cost[i][j] = cost[i][k]+cost[k][j];
            }
        }
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s;
    n = s.size();
    cin >> m;

    for(i=0; i<28; i++)
    {
        for(j=0; j<28; j++)
            cost[i][j] = Mod;
        cost[i][i] = 0;
    }

    for(i=0; i<m; i++)
    {
        char ch1,ch2;
        cin >> ch1>> ch2;
        cost[ch1-'A'][ch2-'A'] = 1;
    }

    floyd();

//    for(i=0; i<28; i++)
//    {
//        for(j=0; j<28; j++)
//
//    }

    ll ans = Mod;
    for(i=0; i<26; i++)
    {
        ll sum = 0;
        for(j=0; j<n; j++)
        {
            sum += cost[s[j]-'A'][i];   //cout <<i<<" "<<j<<" "<<s[j]<<" "<<cost[s[j]-'A'][i]<<" "<<sum<<endl;
        }
        if(ans > sum)
            ans = sum;
    }
    cout <<"Case #"<<t<<": ";

    if( ans<Mod )
        cout << ans << endl;
    else
        cout << -1 <<endl;
    return ;
}


int  main()
{
//    Fast
    Freed
    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
