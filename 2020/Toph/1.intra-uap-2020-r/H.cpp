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
vector< pair<int,int> > ami,tumi;
//bool cmp(vector< pair<int,int> > x,vector< pair<int,int> > y)
//{
//    if(x.first==y.first)
//        return x.second > y.second;
//    return x.first>y.first;
//}
void solve(int t)
{
    int i,j,k,n,m,ak=0,aq=0,tk=0,tq=0,a=0,b=0,d=0;
    char ch;
    for(i=0; i<4; i++)
    {
        cin>> ch;
        if(ch=='J')
            ami.pb(mp(3,1));
        else if(ch=='B')
            ami.pb(mp(2,1));
        else if(ch=='A')
            ami.pb(mp(1,1));
        else if(ch=='C')
            ami.pb(mp(1,0));
        else if(ch=='K')
        {
            ami.pb(mp(0,3));
            ak=1;
        }
        else if(ch=='Q')
        {
            ami.pb(mp(0,2));
            aq=1;
        }
        else if(ch=='X')
            ami.pb(mp(0,1));
        else
            ami.pb(mp(0,0));
    }
    for(i=0; i<4; i++)
    {
        cin>> ch;
        if(ch=='J')
            tumi.pb(mp(3,1));
        else if(ch=='B')
            tumi.pb(mp(2,1));
        else if(ch=='A')
            tumi.pb(mp(1,1));
        else if(ch=='C')
            tumi.pb(mp(1,0));
        else if(ch=='K')
        {
            tumi.pb(mp(0,3));
            tk=1;
        }
        else if(ch=='Q')
        {
            tumi.pb(mp(0,2));
            tq=1;
        }
        else if(ch=='X')
            tumi.pb(mp(0,1));
        else
            tumi.pb(mp(0,0));
    }
    if(ak && aq) a = 3;
    if(tk && tq) b = 3;
    sort(ami.begin(),ami.end());
    sort(tumi.begin(),tumi.end());
    ak=-1;
    tk=-1;
    for(i=3; i>=0; i--)
    {
        d = ami[i].first;
        if(ami[i].first>tumi[i].first)
            a+=ami[i].first+tumi[i].first;
        else if(ami[i].first<tumi[i].first)
            b+=ami[i].first+tumi[i].first;
        else
        {
            for(j=0; j<=i; j++)
            {
                if(ami[i].first==d && ak<ami[i].second)
                    ak=ami[i].second;
            }
            for(j=0; j<=i; j++)
            {
                if(tumi[i].first==d && tk<tumi[i].second)
                    tk=tumi[i].second;
            }
            if(ak>tk)
            {
                a+=ami[i].first+tumi[i].first;
            }
            else
            {
                b+=ami[i].first+tumi[i].first;
            }
        }
    }
    if(a>b)
    {
        cout <<"Towfique Bhai, The DP_Master!\n";
        return;
    }
    if(a<b)
    {
        cout <<"Nihad Bhai, The_Mathematician!\n";
        return ;
    }
    cout <<"Oh! It is a draw\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



