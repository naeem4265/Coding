///identify operators and constrains from given inputs.
#include<bits/stdc++.h>
using namespace std;

bool check(string t)
{    //cout <<t<<endl;
    if(t.size()==0) return 0;
    bool ok=1;
    int i,n=t.size();
    for(i=0; i<n; i++)
    {
        if((ok==0 || t[i]!='.') && (t[i]>'9' || t[i]<'0')) return 0;
        if(t[i]=='.')
            ok=0;
    }
    return 1;
}

int op(string t)
{
    return t.size()/2 + t.size()%2;
}

int main()
{
    freopen("input.txt","r", stdin);
    string s,t;
    int oper=0,con=0;
    int i,j,l;
    while(getline(cin, s))
    {
        int n = s.size();
        t = "";
        for(i=0; i<n; i++)
        {   //cout <<i<<" "<<s[i]<<endl;
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%' || s[i]=='=' || s[i]=='&' ||s[i]=='|')
            {
                if(check(t))
                    con++;
                j = i;
                int k = 0;
                t =  "";
                while(i<n && s[j]==s[i])
                {
                    t+=s[i++];
                }
                oper += op(t);
                i--;
                t="";
            }
            else if(s[i]==' '|| s[i]==';')
            {
                if(check(t))
                    con++;
                t = "";
            }
            else
                t += s[i];
        }
    }
    cout <<oper<<" operators\n";
    cout <<con<<" constant\n";
    return 0;
}
