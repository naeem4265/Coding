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
    string s;
    cin >> s;
    n = s.size();
    ll lsum[n+5], sum=0;

    for(i=0; i<n; i++)
    {
        lsum[i] = s[i]-'0';
        if(i)  lsum[i] += lsum[i-1];
        sum += s[i]-'0';
    }

    for(i=0; i<n; i++)
    {
        if(lsum[i]>=(sum-lsum[i]))
        {
            for(j=0; j<i; j++)   cout <<s[j];
            m = s[i]-'0';
            ll l = 0, r = sum-lsum[i];
            if(i)
                l = lsum[i-1];
            if(l>r)
            {
                r = l-r;
                l = 0;
            }
            else
            {
                l = r-l;
                r = 0;
            }
            m -= max(l, r);
            cout << l+ (m+1)/2;
            for(j=i+1; j<n; j++)  cout <<0;

            cout <<" ";
            bool ok = 0;
            if( (r+m/2))
            {
                cout <<r+m/2;
                ok = 1;
            }
            for(j=i+1; j<n; j++)
            {
                if(ok==0 && s[j]=='0')   continue;
                ok = 1;
                cout <<s[j];
            }
            if(ok==0)  cout <<0;
            cout <<endl;    //cout <<i<<" here "<<l<<" "<<r<<" "<<m<<endl;
            return;
        }
    }

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

