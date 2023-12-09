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

struct stc
{
    ll mn, mx, cont, x;
};

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    stc node[n+5];
    node[1].mn = 0;
    node[1].mx = 1;
    node[1].cont = 1;
    node[1].x = 1;
    for(i=0,k=1; i<n; i++)
    {
        char ch;
        cin >> ch;
        if(ch=='+')
        {
            ll v,temp;
            cin >> v >> temp;
            k++;
            node[k] = node[v];   //cout<<k<<" "<<node[k].mn<<" "<<node[k].mx<<" "<<node[k].cont<<" "<<node[k].x<<endl;
            if(node[v].x==temp)
            {
                node[k].cont++;
                if(temp==-1)
                {
                    node[k].mn = max(node[k].mn, node[k].cont);
                }
                else
                {
                    node[k].mx = max(node[k].mx, node[k].cont);
                }
            }
            else
            {
                node[k].cont = 1;
                node[k].x = temp;
                if(temp==-1)
                {
                    node[k].mn = max(node[k].mn, 1LL);
                }
                else
                {
                    node[k].mx = max(node[k].mx, 1LL);
                }
            }
            //cout<<k<<" "<<node[k].mn<<" "<<node[k].mx<<" "<<node[k].cont<<" "<<node[k].x<<endl;
        }
        else
        {
            ll u,v,temp;
            cin >> u >> v >> temp;
            if(temp==-1)
            {
                if(-temp<=node[v].mn)
                    cout <<"YES\n";
                else
                    cout <<"NO\n";
            }
            else
            {
                if(temp<=node[v].mx)
                    cout <<"YES\n";
                else
                    cout <<"NO\n";
            }
        }
    }


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
