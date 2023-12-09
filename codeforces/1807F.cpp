#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;

ll n, m, x2, y2;
map<pair<string,pair<ll,ll> >,bool> mp;

bool ok = 0;

ll check(ll x, ll y, char c1, char c2)
{
    string s = ""+c1+c2;
    if(mp[{s,{x,y}}])   return 0;
    mp[{s,{x,y}}] = 1;
    if(c1=='L')
    {
        if(c2=='U')
        {
            if((x-x2)==(y-y2) && x>=x2 && y>=y2)
            {
                ok = 1;
                return 0;
            }
            if((x-1)==(y-1))   return 0;
            else if((x-1)<(y-1))    return 1+check(1, y-x+1, c1, 'D');
            else                    return 1+check(x-y+1, 1, 'R', c2);
        }
        else
        {
            if((x2-x)==(y-y2) && x2>=x && y>=y2)
            {
                ok = 1;
                return 0;
            }
            if((n-x)==(y-1))   return 0;
            else if((n-x)<(y-1))    return 1+check(n, y-(n-x), c1, 'U');
            else                    return 1+check(x-y+1, 1, 'R', c2);
        }
    }
    else
    {
        if(c2=='U')
        {
            if((x-x2)==(y2-y) && x>=x2 && y2>=y)
            {
                ok = 1;
                return 0;
            }
            if((x-1)==(m-y))   return 0;
            else if((x-1)<(m-y))    return 1+check(1, y+x-1, c1, 'D');
            else                    return 1+check(x-(m-y), m, 'L', c2);
        }
        else
        {
            if((x2-x)==(y2-y) && x2>=x && y2>=y)
            {
                ok = 1;
                return 0;
            }
            if((n-x)==(m-y))   return 0;
            else if((n-x)<(m-y))    return 1+check(n, y+n-x, c1, 'U');
            else                    return 1+check(x+m-y, m, 'L', c2);
        }
    }
}

void Please_AC(ll tt)
{
    ll x1,y1;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    string s;
    cin >> s;

    ll ct = check(x1,y1, s[1], s[0]);
    if(ok)
    {
        cout <<ct<<endl;    return;
    }
    ok = 0;
    if(s[0]=='D')  s[0] = 'U';
    else           s[0] = 'D';
    if(s[1]=='L')  s[1] = 'R';
    else           s[1] = 'L';

    ll ct2 = check(x1,y1, s[1], s[0]);
    if(ok)
    {
        cout <<ct+ct2+1<<endl; return;
    }
    cout <<-1<<endl;
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
        ok = 0;
        mp.clear();
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

