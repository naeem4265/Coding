#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

bool operator < (pair<int,int> a, pair<int,int> b){
    if( a.first < b.first )   return a.first < b.first;
    return a.second > b.second;
}

bool cmp( pair<int,int> a, pair<int,int> b ){
    if( a.first <= b.first )   return a.first <= b.first;
    return false;
}

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                v.push_back({i+j, nums[i][j]});
            }
        }
        //for(int i=0; i<v.size(); i++)  cout <<v[i].second<<" "; cout <<endl;
        sort(v.begin(), v.end(), cmp);
        vector<int> ans;
        for(int i=0; i<v.size(); i++){
           ans.push_back(v[i].second);
        }
        return ans;
    }
};


int  main()
{
    Fast
//    Freed
//    Fout
    vector<vector<int> > v {{1,2,3},{4,5,6},{7,8,9}};
    Solution a;
    vector<int> ans = a.findDiagonalOrder(v);
    for(int i = 0; i<ans.size(); i++)   cout << ans[i] <<" "; cout <<endl;
    return 0;
}
