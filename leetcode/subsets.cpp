class Solution {
public:
    vector<int> temp;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > v;
        rec(0, nums, v);
        return v;
    }
    void rec(int pos, vector<int> nums, vector<vector<int> >& v)
    {
        if(pos==nums.size())
        {
            v.push_back(temp);
            return;
        }
        rec(pos+1, nums, v);
        temp.push_back(nums[pos]);
        rec(pos+1, nums, v);
        temp.pop_back();
    }
};
