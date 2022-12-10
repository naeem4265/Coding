#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll l,r,x,a,b;
    cin >> l>> r >> x;
    cin >> a >> b;
    if(a==b)
    {
        cout << 0 <<endl;
        return;
    }
    else if(abs(a-b)>=x)
    {
        cout << 1 <<endl;
        return;
    }
    else if(abs(a-l)>=x )
    {
        if(abs(b-l)>=x){
            cout <<2<<endl;
            return;}
        else if(abs(b-r)>=x)
            {cout <<3<<endl;
            return;}
    }
    else if(abs(a-r)>=x)
    {
        if( abs(b-r)>=x)
            {cout <<2<<endl;return;}
        else if(abs(b-l)>=x)
            {cout <<3<<endl;return;}

    }
    cout <<-1<<endl;
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

