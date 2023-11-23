class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<pair<pair<int,int>,int>> v;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                v.push_back({{i+j,-i}, nums[i][j]});
            }
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for(int i=0; i<v.size(); i++){
           ans.push_back(v[i].second);
        }   
        cout <<v[0].first.first<<" "<<v[0].first.second << endl;
        return ans;
    }
};