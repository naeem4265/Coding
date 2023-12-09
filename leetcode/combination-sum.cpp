class Solution {
public:
    vector<int> temp;
    vector<vector<int> > v;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        rec(0, candidates, target, 0);
        return v;
    }
    void rec(int pos, vector<int> &candidates, int target, int sum)
    {       //cout <<pos<<' '<<sum<<endl;
        if(pos==candidates.size())
        {
            if(sum==target)
            {
                v.push_back(temp);
            }
            return;
        }
        if(sum>target)   return ;
        rec(pos+1, candidates, target, sum);
        temp.push_back(candidates[pos]);
        rec(pos, candidates, target, sum+candidates[pos]);
        temp.pop_back();
    }
};
