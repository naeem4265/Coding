#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    string s;
    cin >> s;
    stack<pair<ll,char > > stk;

    bool col[n+5];
    memset(col, 0, sizeof(col));

    reverse(s.begin(), s.end());
    ll op=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='(')  op++;
        else   op--;

        if(s[i]==')' && !stk.empty() && stk.top().second != s[i])
        {
            col[i] = 1;
            col[stk.top().first] = 1;
            stk.pop();
        }
        else
        {
            stk.push({i, s[i]});
        }
    }
    if(op)
    {
        cout <<-1<<endl;
        return;
    }
    if(stk.empty())
    {
        cout <<1<<endl;
        for(i=0; i<n; i++)   cout <<"1 ";
        cout <<endl;
        return;
    }

    memset(col, 0, sizeof(col));
    while(!stk.empty())   stk.pop();
    reverse(s.begin(), s.end());


    for(i=0; i<n; i++)
    {
        if(s[i]==')' && !stk.empty() && stk.top().second != s[i])
        {
            col[i] = 1;
            col[stk.top().first] = 1;
            stk.pop();
        }
        else
        {
            stk.push({i, s[i]});
        }
    }
    if(stk.empty())
        cout <<1<<endl;
    else
        cout <<2<<endl;

    for(i=0; i<n; i++)
    {
        if(col[i])  cout <<1<<" ";
        else cout <<"2 ";
    }
    cout <<endl;

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
