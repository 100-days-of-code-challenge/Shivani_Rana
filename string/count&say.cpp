leetcode
Count & say
string

https://leetcode.com/problems/count-and-say/submissions/

class Solution {
public:
    string countAndSay(int n) {
         if(n == 1)
        return "1";
        if(n==2)
        return "11";
        
        
        string str = "11";
        
        for(int i = 3;i<=n;i++)
        {
            str += '$';
            int count = 1;
            string temp = "";
            int l = str.length();
            for(int j=1;j<l;j++)
            {
                if(str[j-1] != str[j])
                {
                    temp = temp + to_string(count);
                    temp += str[j-1];
                    count = 1;
                }
                else 
                count++;
            }
            str = temp;
        }
        // code here
        return str;
        
    }
};