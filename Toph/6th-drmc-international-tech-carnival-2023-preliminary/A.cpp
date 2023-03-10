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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s1,s2;
    char c;
    int sd=0,ed=0,sh=0,sm=0,ss=0,eh=0,em=0,es=0;


    cin>>s1;
    cin>>sd;
    cin>>sh>>c>>sm>>c>>ss;   //cout << s1<<" "<<sd<<endl;  cout << sh<<" "<<sm<<" "<<ss<<endl;

    cin>>s2;
    cin>>ed;
    cin>>eh>>c>>em>>c>>es;   //cout << s2<<" "<<ed<<endl;  cout << eh<<" "<<em<<" "<<es<<endl;


    int td=0,th=0,tm=0,ts=0;
    if(es<ss){
        ts = (es+60)-ss;
        sm++;
    }else{
        ts = es-ss;
    }
    if(em<sm){
        tm = (em+60)-sm;
        sh++;
    }else{
        tm = em-sm;
    }
    if(eh<sh){
        th = (eh+24)-sh;
        sd++;
    }else{
        th = eh-sh;
    }


    td = ed-sd;
    cout << td << " day(s)\n" << th << " hour(s)\n" << tm << " minute(s)\n" << ts << " second(s)\n";


    return ;
}


int  main()
{
    //Fast
    //Freed
    //Fout
    ll t,tt=1;
    // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

