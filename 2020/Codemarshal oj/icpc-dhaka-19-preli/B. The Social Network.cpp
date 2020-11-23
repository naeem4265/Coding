#include<bits/stdc++.h>
#define limit 100008

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
            orderset;
orderset os[limit];

int pr[limit];
int Find(int u)
{
    if(pr[u]==u) return u;
    return pr[u] = Find(pr[u]);
}
void dsu(int u,int v)
{
    pr[Find(v)] = Find(u);
}

void solve(int t)
{
    int i,j,n,m,k,q;
    scanf("%d %d", &n, &q);
    for(i=0; i<=n; i++)
    {
        pr[i] = i;
        os[i].clear();
    }
    printf("Case %d:\n",t);
    for(i=0; i<q; i++)
    {
        int type,u,v,x,y,time,L,R;
        scanf("%d",&type);
        if(type==0)
        {
            scanf("%d %d",&u,&v);
            x = Find(u);
            y = Find(v);
            if(x!=y)
            {
                if(os[x].size()<os[y].size())
                {
                    swap(x,y);
                    swap(u,v);
                }
                dsu(x,y);
                for(auto it: os[y])
                {
                    os[x].insert(it);
                }
            }
        }
        else if(type==1)
        {
            scanf("%d %d",&u,&time);
            os[Find(u)].insert(time);
        }
        else
        {
            scanf("%d %d %d",&u,&L,&R);
            printf("%d\n",os[Find(u)].order_of_key(R+1)-os[Find(u)].order_of_key(L));
        }
    }
    return ;
}
int  main()
{
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

