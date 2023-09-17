#include<bits/stdc++.h>
#define Freed freopen ("input.txt","r",stdin);
#define Fout freopen ("output.txt","w",stdout);
using namespace std;
map<pair<int,string>, bool > mp;

void update(vector<string> &feature, int ver)
{
    for(int i=0; i<feature.size(); i++)
    {
        mp[{ver, feature[i]}] = 1;
    }
}

void modify(vector<string> &feature, string from, string to)
{
    for(int i=0; i<feature.size(); i++)
    {
        if(feature[i]==from)
            feature[i] = to;
    }
}

int main()
{
Freed;

    string s;
    getline(cin, s);
    vector<string> feature;

    string temp = "";
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==',' || s[i]==']')
        {
            feature.push_back(temp);
            temp = "";
        }
        else if(s[i]==' ')
            continue;
        else
            temp += s[i];
    }

    int ver = 1;
    update(feature, ver);

    string type;
    while(cin >> type)
    {
        if(type=="Add")
        {
            string temp;
            cin >> temp;
            feature.push_back(temp);
            ver++;
            update(feature, ver);
        }
        else if(type=="Modify")
        {
            string from, to;
            cin >> from >> to;
            ver++;
            modify(feature, from, to);
            update(feature, ver);
        }
        else
        {
            int x=0,i;
            string temp, key;
            cin >> temp >> key;
            for(i=0; i<temp.size(); i++)
            {
                if(temp[i]==':')
                {
                    break;
                }
            }
            for(i=i+1; i<temp.size(); i++)
            {
                if(temp[i]>='0' && temp[i]<='9')
                {
                    x = x*10+temp[i]-'0';
                }
                else
                    break;
            }
            if(mp[{x,key}])
                cout <<"Yes\n";
            else
                cout <<"No\n";
        }
    }
    return 0;
}
