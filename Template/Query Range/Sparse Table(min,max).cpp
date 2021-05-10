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

///Sparse_Table ST O(n*logn)
ll sparse_table[limit][25];
void ST(ll t)
{
    ll i,j,n,m,k,q;

    cin >> n >> q;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];

    ll sparse_tabel[n+5][25];
    for(i=1; i<=n; i++)
    {
        sparse_table[i][0] = d[i];         //min/max for length 1
    }
    ll len;
    for(j=1, len=1; j<25; j++, len=len*2)
    {
        for(i=1; i<=n; i++)
        {
            if((i+len*2-1)>n) break;            //out of bound
            sparse_table[i][j] = min(sparse_table[i][j-1],sparse_table[i+len][j-1]);
        }
    }

    for(i=0; i<q; i++)
    {
        ll l,r;
        cin >> l >> r;
        ll len = (r-l);
        j = log2(len);
        len = 1 << j;
        cout << min(sparse_table[l][j], sparse_table[r-len+1][j]) << endl;     //minimum between l+len and r-len
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        ST(t);
    return 0;
}

