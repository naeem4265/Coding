#include "bits/stdc++.h"
using namespace std;
/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using ordered_set = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;
*/

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)(x).size()

using ll = long long;
const int mod = 1e9+7;

int tsum = 0;

void solve(int tc) {
    int n;
    cin >> n;
  	assert(n <= 2000);
  	tsum += n;
    vector<int> a(n), d(n);
    for (auto &x: a) {
        cin >> x;
	  	assert(x >= 0 and x <= 1);
	}
	for (int i = 0; i < n; ++i) {
  		cin >> d[i];
//      cerr << i+1 << " " << d[i] << '\n';
	  	assert(d[i] >= 0 and d[i] <= n-(i));
	}
    vector<int> dp(n, (1<<30));
    dp[0] = (a[0] == 0 and d[0] > 0);
    for (int i = 1; i < n; ++i) {
        if (a[i] == 1) {
            dp[i] = dp[i-1];
            continue;
        }
        if (d[i] > 0) dp[i] = dp[i-1] + 1;
        for (int j = i-1; j >= 0; --j) {
            if (j + d[j] - 1 >= i) {
                dp[i] = min(dp[i], (j-1 >= 0 ? dp[j-1] : 0) + 1);
            }
        }
    }
    cout << (dp[n-1] >= (1<<30) ? -1 : dp[n-1]) << '\n';
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
  	assert(tc <= 100);
    for (int i = 1; i <= tc; ++i) solve(i);
  	assert(tsum <= 2000);
    return 0;
}


