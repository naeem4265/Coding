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


int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    while(1)
    {
        int i,j,n,m,k,x1,y1,x2,y2,x,y;
        cin >> x1 >> y1 >> x2>> y2;
        if(x1==0&&x2==0&&y1==0&&y2==0) break;
        if(x1>x2)
        {
            swap(x1,x2);
            swap(y1,y2);
        }
        x = abs(x2-x1);
        y = abs(y2-y1); // cout <<x<<" "<<y<<" "<<x1+y1<<" "<<x2+y2<<endl;
        if((x1+y1)%2==0 && (x2+y2)&1) x--;
        if((x1+y1)%2 && (x2+y2)%2==0) x++;
        if(x<=y)
            cout <<abs(x2-x1)+abs(y2-y1)<<endl;
        else
            cout <<abs(x2-x1)+x<<endl;
    }
    return 0;
}

