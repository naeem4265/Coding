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
    cout << "Case " << tt << ": ";
    ll i,j,n,m,k,q;
    string s;
    cin>>n;
    vector<string> v(3);
    vector<ll> a;
    for(i = 0; i<3; i++){
        cin>>v[i];
    }

    ll cnt = 0;
    for(i = 0; i<n; i++){
        if(v[1][i]=='X' || (v[0][i]=='X' && v[2][i]=='X')) {
            a.push_back(cnt);
            cnt=0;
        }else if(i && ((v[0][i]=='X' && v[2][i-1]=='X') || (v[2][i]=='X' && v[0][i-1]=='X'))){
            a.push_back(cnt);
            cnt=0;
        }
        else cnt++;  // cout <<"here "<<cnt<<endl;
    }
    a.push_back(cnt);

    ll win = 0, lose = 0;
    for(i = 0; i<a.size(); i++){
        if(a[i]==0 || a[i]==1) continue;
        if(a[i]==5) lose++;
        else win++;  // cout <<i<<" her "<<a[i]<<" "<<win<<" "<<lose<<endl;
    }
    lose%=2;
    if(win&1)cout << "Jhinuk\n";
    else cout << "Grandma\n";


    return ;
}


int  main()
{
    //Fast
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

