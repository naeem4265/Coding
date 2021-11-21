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

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int> > arr(numRows);
        for(int i=0; i<numRows; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(j==i || j==0)
                    arr[i].push_back(1);
                else
                    arr[i].push_back(arr[i-1][j-1]+arr[i-1][j]);
                cout <<arr[i][arr[i].size()-1]<<" ";
            }
            cout <<endl;
        }
        return arr;
    }
};

int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    Solution ob;
    ob.generate(tt);
    return 0;
}


