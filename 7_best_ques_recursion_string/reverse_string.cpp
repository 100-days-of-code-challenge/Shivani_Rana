class Solution {
public:
    
        
        void fun_to_reverse(int left,int right, vector<char>&s)
    {
        if(left>=right)
        {
            return;
            
        }
        else{
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        fun_to_reverse(left+1,right-1,s);
        }
    }
    
    
    void reverseString(vector<char>& s) {
         
        int left = 0;
        int right = s.size()-1;
        
        fun_to_reverse(left,right,s);
        
    }
};