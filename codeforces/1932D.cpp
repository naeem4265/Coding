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

ll indx(char ch ) {
    if( ch == 'C' )         return 0;
    else if( ch =='D' )     return 1;
    else if( ch == 'H' )    return 2;
    else                    return 3;
}
char C(ll idx ) {
    if( idx==0 )            return 'C';
    else if( idx == 1 )     return 'D';
    else if( idx==2 )       return 'H';
    else                    return 'S';
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
   
    cin >> n ;
    char c,suit;
    cin >> c;
    ll ch;
    ch = indx(c);

    m = n*2;

    vector<ll>v[4];
    for( i=0; i<m; i++ ) {
        ll rank;
        cin >> rank >> suit;
        ll x = indx(suit);
        v[x].pb(rank);
    }

    ll ct = 0;
    for( i=0; i<4; i++ ) {
        sort(v[i].begin(), v[i].end() );

        if( i==ch ) {
            ct += v[i].size();
        } else {
            ct += v[i].size()/2;
        }
    }
    if( ct < n ) {
        cout <<"IMPOSSIBLE\n";
        return;
    }
    for( i=0, k= 0; i<4; i++ ) {
        if( i != ch ) {
            c = C(i);
            for( j=1; j<v[i].size(); j+=2 ) {
                cout <<v[i][j-1]<< c <<" "<<v[i][j]<< c<<endl;
            }
            if( v[i].size() & 1 )  {
                cout << v[i][v[i].size()-1]<< c <<" "<<v[ch][k++]<< C(ch) <<endl;
            }
        }
    }
    c = C(ch);
    for( i=k; i<v[ch].size(); i+=2 )   cout <<v[ch][i]<< c<<" "<<v[ch][i+1]<< c <<endl;

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
