class Solution {
public:
    vector<string> ans;
    string temp;
    int n;
    string s;
    
    vector<string> letterCombinations(string digits) {
        temp = "";
        n = digits.size();
        s = digits;
        if(n==0)    return ans;
        
        rec(0);
        return ans;
    }
    void rec(int pos)
    {
        if(pos==n)
        {
            ans.push_back(temp);
            return;
        }
        if(s[pos]=='2')
        {
            for(char i='a'; i<='c'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='3')
        {
            for(char i='d'; i<='f'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='4')
        {
            for(char i='g'; i<='i'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='5')
        {
            for(char i='j'; i<='l'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='6')
        {
            for(char i='m'; i<='o'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='7')
        {
            for(char i='p'; i<='s'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='8')
        {
            for(char i='t'; i<='v'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
        if(s[pos]=='9')
        {
            for(char i='w'; i<='z'; i++)
            {
                temp = temp+i;
                rec(pos+1);
                temp.pop_back();
            }
        }
    }
};
