class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(c || a || b)
        {
            int d = c%2;
            c /= 2;
            if(d)
            {
                if(a%2==0 && b%2==0)
                    ans++;
            }
            else
            {
                if(a&1)   ans++;
                if(b&1)   ans++;
            }
            a/=2;
            b/=2;
        }
        return ans;
    }
};
