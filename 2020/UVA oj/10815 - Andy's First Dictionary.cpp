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
    int i,j,n,m,k;
    string s,s2,temp;
    set<string >st;
    set<string>::iterator it;
    map<string ,string >mymap;

    while(cin >> temp)
    {
        vector<char>v;
        v.clear();
        for(i=0,j=0; i<temp.size(); i++)
        {
            if((temp[i]<='z' && temp[i]>='a') || (temp[i]>='A' && temp[i]<='Z'))
                v.pb(temp[i]);
            else
            {
                if(v.size()==0) continue;
                s2.resize(v.size());
                for(j=0; j<v.size(); j++)
                {
                    if(v[j]>='A' && v[j]<='Z')
                        s2[j] = v[j]+32;
                    else
                        s2[j] = v[j];
                }
                st.insert(s2);
                v.clear();
            }
        }
        if(v.size()==0) continue;
        s2.resize(v.size());
        for(i=0; i<v.size(); i++)
        {
            if(v[i]>='A' && v[i]<='Z')
                s2[i] = v[i]+32;
            else
                s2[i] = v[i];
        }
        st.insert(s2);
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout <<*it<<endl;
    }
    return 0;
}

//Accepted
