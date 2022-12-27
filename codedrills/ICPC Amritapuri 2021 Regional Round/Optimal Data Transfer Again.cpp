#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e3+7;
using namespace std;

vector<int>Parent(limit,-1);
vector<int>Rank(limit,1);
int cost = 0;

int Find(int a){

    if(Parent[a]<0) return a;

    return Parent[a]=Find(Parent[a]);

}

void Union(int a,int b,int x){

    a=Find(a);
    b=Find(b);

    if(a!=b){

        if(Rank[b]>Rank[a]) swap(a,b);
        Parent[b]=a;
        Rank[a]+=Rank[b];

        cost += x;
    }
}



void Please_AC(ll tt)
{
    int n , m;
    string s;

    cin >> n >> m;


    string aa[n+3];

    for(int i=1;i<=n;i++){
        cin >> aa[i];
    }

    vector<pair<int,pair<int,int>>>b;

    for(int i=0;i<=n;i++) Parent[i]=-1,Rank[i]=1;

    for(int i=1;i<n;i++){

        for(int j=i+1;j<=n;j++){

            int cnt = 0;
            string p = aa[i] , q = aa[j];

            for(int k = 0;k<m;k++){

                if(p[k] != q[k]) cnt++;
            }

            //cout << i <<" "<<j <<" "<<cnt <<endl;

            b.pb({cnt,{i,j}});

        }

    }

    sort(b.begin(),b.end());

    cost = m;

    for(int i=0;i<b.size();i++){

        Union(b[i].second.first,b[i].second.second,b[i].first);
    }

    cout<< cost <<endl;


    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}


