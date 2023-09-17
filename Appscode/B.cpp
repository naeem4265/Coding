#include<bits/stdc++.h>
#define Freed freopen ("input.txt","r",stdin);
#define Fout freopen ("output.txt","w",stdout);
using namespace std;

struct strct
{
    string name;
    int follower;
    bool trend;
    int tweetValue;
};
bool operator <(strct a, strct b)
{
    if(a.trend != b.trend)
        return a.trend>b.trend;
    if(a.tweetValue != b.tweetValue)
        return a.tweetValue>b.tweetValue;
    if(a.follower != b.follower)
        return a.follower>b.follower;
    return a.name<b.name;
}

int main()
{
    Freed
    //Fout

    string s;
    vector<strct> vec;
    int i;
    while(getline(cin, s))
    {
        strct temp;
        temp.name = "";
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==' ')  break;
            temp.name += s[i];
        }
        temp.follower = 0;
        for(i++; i<s.size(); i++)
        {
            if(s[i]==' ')   break;
            temp.follower = temp.follower*10+(s[i]-'0');
        }
        int len = 0;
        set<char> st;
        for(i++; i<s.size(); i++)
        {
            if(s[i]=='>')  break;
            len++;
            if(s[i]>='a' && s[i]<='z')
                st.insert(s[i]);
        }
        temp.tweetValue = len*st.size();
        if(s[s.size()-1]=='#')   temp.trend = 1;
        else   temp.trend = 0;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for(i=0; i<vec.size(); i++)
    {
        cout <<vec[i].name<<" "<<vec[i].follower<<endl;
    }
    return 0;
}
