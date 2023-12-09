#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int i,j,n;
    int m = i*j, d[7], k=-1,l, ans = 0;
    scanf("%d", &n);
    for(i=100; i<1000; i++)
    {
        for(j=100; j<1000; j++)
        {
            m = i*j;
            if(m>=n)    break;
            k = -1;
            while(m)
            {
                d[++k] = m%10;
                m /= 10;
            }
            m = i*j;
            
            for(l=0; l<=k; l++,k--)
            {
                if(d[l] != d[k])  break;
            }
            if(l>=k && ans<m)   ans = m;
        }
    }
    printf("%d\n", ans);
}

int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        solve();
    }
    return 0;
}
