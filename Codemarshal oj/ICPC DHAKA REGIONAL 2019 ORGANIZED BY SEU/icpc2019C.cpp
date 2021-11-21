#include <bits/stdc++.h>

using namespace std;

#define mx 100005
#define mod 132021913

long long cnt[mx],cntSum[mx], lcmSum[mx], modInv[mx];

long long bigmod(long long n, long long p)
{
    long long ret=1;
    while(p){
        if(p%2) ret=(ret*n)%mod;
        p/=2;
        n=(n*n)%mod;
    }
    return ret;
}

int main()
{

    for(int i=1;i<mx;i++) modInv[i]=bigmod(i,mod-2);

    int t;
    scanf("%d",&t);
//    t=1;
    for(int z=1;z<=t;z++)
    {

        memset(cnt,0,sizeof cnt);
        memset(cntSum,0,sizeof cntSum);
        memset(lcmSum,0,sizeof lcmSum);

        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            cnt[a]++;
            cntSum[a]+=a;
        }

        for(int i=1;i<mx;i++)
        {
            long long pairSum=0,prefixSum=0;
            for(int j=i;j<mx;j+=i)
            {
                pairSum=(pairSum+(prefixSum*cntSum[j])%mod)%mod;
                prefixSum=(prefixSum+cntSum[j])%mod;
            }
            lcmSum[i]=pairSum;
        }

        for(int i=mx-1;i>=1;i--) {
            long long sub=0;
            for(int j=i+i;j<mx;j+=i){
                sub=(sub+lcmSum[j])%mod;
            }
            lcmSum[i]=((lcmSum[i]-sub)%mod + mod)%mod;
        }

        long long ans=0;

        for(int i=1;i<mx;i++){
            ans=(ans+(lcmSum[i]*modInv[i])%mod)%mod;
            long long only_i = (i*(cnt[i]*(cnt[i]-1))/2)%mod;
            ans=(ans+only_i)%mod;
        }

        printf("Case %d: %lld\n",z,ans);
//        printf("%lld\n",ans);
    }

    return 0;
}
