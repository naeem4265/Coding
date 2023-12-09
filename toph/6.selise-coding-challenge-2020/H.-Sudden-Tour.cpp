#include<bits/stdc++.h>
using namespace std;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define fWrite          freopen ("out.txt","w",stdout);
#define TC              int t;cin >> t;FOR(tc,1,t)
#define LL              long long
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define pii             pair<int,int>
#define all(a)          a.begin(),a.end()
#define MEM(a,x)        memset(a,x,sizeof(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)

int K[105][100005];

int main()
{
    Fast
    TC{
        int n,c;
        cin >> n >> c;
        int fun[n],space[n];
        REP(i,n) cin >> space[i] >> fun[i];

        for (int i = 0; i <= n; i++)
        {
            for (int w = 0; w <= c; w++)
            {
                if (i == 0 || w == 0)
                    K[i][w] = 0;
                else if (space[i - 1] <= w)
                    K[i][w] = max(fun[i - 1] + K[i - 1][w - space[i - 1]],K[i - 1][w]);
                else
                    K[i][w] = K[i - 1][w];
            }
        }
        cout << "Case " << tc << ": " << K[n][c] << '\n';
    }
}
