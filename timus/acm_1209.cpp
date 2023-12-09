#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

bool vis[limit];
int  main()
{
//    Fast
//    Freed
//    Fout
    int i,tt=1;
    cin >> tt;
    for(i=1; i<=tt; i++)
    {
        ll a,t,temp;
        cin >> a;
        a--;
        if(i!=1)  cout<<" ";
        temp = a*8+1;
        t = sqrt(temp);
        if(t*t==temp || (t+1)*(t+1)==temp)
            cout <<"1";
        else
            cout <<"0";

    }
    cout <<endl;
    return 0;
}



