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

#include<bits/stdc++.h>
#define limit 100008

///PBDS or Order set/multiset/map any operation O(logn)
///insert,erase,size,order_of_key
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef array<char, null_type, less<int>, rb_tree_tag>
            new_data_type;

using namespace std;

int  main()
{
//    Fast
//    Freed
//    Fout
    int n;
    cin >> n;
    string s;
    cin >> s;
    new_data_type ch;
    for(int i=0; i<n; i++)
    {
        ch.insert(s[i]);
    }
    int j=0;
    for(auto i=ch.begin(); i!=ch.end(); i++)
    {             cout <<j++<<" "<<&i<<" "<<*i<<endl;
//        if(*i=='f')
//        {
//            i++;
//            if(*i=='o')
//            {
//                i++;
//                if(*i=='x')
//                {           cout <<"naeem\n";
//                    ch.erase(i);
//                    i--;
//                    ch.erase(i);
//                    i--;
//                    ch.erase(i);
//                    i--;
//                }
//                i--;
//            }
//            i--;
//        }
    }
    cout <<ch.size()<<endl;
    return 0;
}

