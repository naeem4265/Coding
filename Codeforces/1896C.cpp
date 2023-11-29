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

bool cmp(pair<int,int> x, pair<int,int> y ){
    return x.second < y.second;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    vector<pair<int,int> > a(n),b(n);
    for(i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for(i=0; i<n; i++){
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(i=n-k,j=0; j<k; i++,j++){
        b[j].second = a[i].second;
        if( a[i].first <= b[j].first){
            cout <<"NO\n";
            return;
        }
    }
    for(i=0,j=k; j<n; i++,j++){
        b[j].second = a[i].second;
        if( a[i].first > b[j].first) {
            cout <<"NO\n";
            return;
        }
    }
    sort(b.begin(), b.end(), cmp);
    cout <<"YES\n";
    for(i=0; i<n; i++)   cout <<b[i].first<<" "; cout <<endl;

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
