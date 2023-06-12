class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        int l,r;
        vector<string> v;
        if(!n)   return v;
        for(l=0,r=1; r<n; r++)
        {
            if(nums[r]-1==nums[r-1])   continue;
            cout <<nums[l]<<"->"<<nums[r-1]<<endl;
            string s = to_string(nums[l]);
            if(r-1 != l){
                s += "->";
                s += to_string(nums[r-1]);
            }
            v.push_back(s);
            l = r;
        }
        string s = to_string(nums[l]);
        if(r-1 != l){
            s += "->";
            s += to_string(nums[r-1]);
        }
        v.push_back(s);
        return v;
    }
};
