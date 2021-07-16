GFG  Problem -> Last index of one
https://practice.geeksforgeeks.org/problems/last-index-of-15847/1#

class Solution{
    public:
    int lastIndex(string s) 
    {
        int n = s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            return i;
        }
        return -1;
        
    }

};