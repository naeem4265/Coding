#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 500008
using namespace std;
bool vis[limit];
set<ll> st,serial[limit];
set<ll> :: iterator it,it2;

void solve(ll tc)
{
    ll i,j,n,m,k=1,q,t;
    cin >> q ;
    for(i=1; q; q--)
    {
        cin >> t;  //cout <<q<<" query "<<t<<endl;
        if(t==1)
        {
            cin >> m;
            st.insert(m);
            serial[m].insert(i);
            i++;
        }
        else if(t==2)
        {
            while(vis[k]) k++;
            cout <<k<<" ";
            vis[k]=1;
            k++;
        }
        else
        {
            bool ok=0;
            while(!st.empty())
            {
                it = st.end();
                it--;
                for(it2=serial[*it].begin(); it2!=serial[*it].end(); it2++)
                {         // cout <<"query type-3 "<<*it<<" "<<*it2<<endl;
                    if(vis[*it2]==0)
                    {
                        cout <<*it2<<" ";
                        vis[*it2]=1;
                        ok=1;
                        serial[*it].erase(it2);
                        if(serial[*it].empty())
                            st.erase(it);
                        break;
                    }
                    serial[*it].erase(it2);
                    if(serial[*it].empty())
                    {
                        st.erase(it);
                        break;
                    }
                }
                if(ok) break;
            }
        }
    }
    cout <<endl;
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

