#include<bits/stdc++.h>
#define Freed freopen ("input.txt","r",stdin);
#define Fout freopen ("output.txt","w",stdout);
using namespace std;

int main()
{
    Freed;
    string s;
    map<string, int> mp;
    vector<string> vec;

    while(cin >> s)
    {
        mp[s]++;
        vec.push_back(s);
    }
    int sz = vec.size();
    for(int i=sz-1; i>=0; i--)
    {
        if(mp[vec[i]])
        {
            cout << vec[i] <<" "<<mp[vec[i]]<<endl;
            mp[vec[i]] = 0;
        }
    }
    return 0;
}
