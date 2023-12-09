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
    string s,temp1,temp2,temp3;
    cin >> s;
    n = s.size();
    for(i=1; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            temp1 = s.substr(0,i);
            temp2 = s.substr(i, j-i);
            temp3 = s.substr(j, n-j);
            //cout << temp1<<" "<<temp2<<" "<<temp3<<endl;
            if((temp1<=temp2 && temp3<=temp2) || (temp1>=temp2 && temp3>=temp2))
            {
                cout << temp1<<" "<<temp2<<" "<<temp3<<endl;
                return;
            }
        }
    }
    cout <<":(\n";
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

