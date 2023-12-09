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
    ll i,j,n,m,k,q,a,b;
    cin >> m;
    ll l = 0, h = 1e18;
    for(i=0; i<m; i++)
    {
        cin >> tt;
        if(tt==1)
        {
            cin >> a >> b >> n;
            ll lo = (a-b)*(n-1)+1;
            ll hi = (a-b)*(n-1)+a;

            ll low = 0,high = hi,mid;
            while(low<=high)
            {
                mid = (low+high)/2;
                ll n1 = 1 ;
                if(a<mid)
                {
                    n1 += (mid-a)/(a-b);
                    if( (mid-a)%(a-b))   n1++;
                }

                if(n1==n)
                {
                    lo = mid;
                    high = mid-1;
                }
                else
                    low = mid+1;
            }        //cout <<endl<<lo<<" hhhh "<<hi<<" "<<l<<" "<<h<<endl;

            ll n1 = 1 ;
            if(a<l)
            {
                n1 += (l-a)/(a-b);
                if( (l-a)%(a-b))   n1++;
            }
            ll n2 = 1 ;
            if(a<h)
            {
                n2 += (h-a)/(a-b);
                if( (h-a)%(a-b))   n2++;
            }

            if((l && (n1!=n || n2!=n)) || lo<l || hi>h)   cout <<0<<" ";
            else
            {
                cout <<1<<" ";
                l = lo;
                h = hi;
            }
        }
        else
        {
            cin >> a >> b;
            ll n1 = 1 ;
            if(a<l)
            {
                n1 += (l-a)/(a-b);
                if( (l-a)%(a-b))   n1++;
            }
            ll n2 = 1 ;
            if(a<h)
            {
                n2 += (h-a)/(a-b);
                if( (h-a)%(a-b))   n2++;
            }
            if(n1==n2)    cout <<n1<<" ";
            else          cout <<-1<<" ";     // cout <<endl<<n1<<" here "<<n2<<" "<<l<<" "<<h<<endl;
        }
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

