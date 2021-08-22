String-->must do
GFG
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#



class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        S = S+'.';
        vector<string>s1;
        string w ="";
        for(int i=0;S[i]!='\0';i++)
        {
            //w = w+S[i];
            
            if(S[i]=='.')
            {
                s1.push_back(w);
                w = "";
                
            }
            else{
                w = w+S[i];
            }
            
            
        }
       
        reverse(s1.begin(),s1.end());
        
         string s2 ="";
         int n = s1.size();
         int i =1;
         s2 = s2+s1[0];
         while(i<n){
             s2 = s2+'.'+s1[i];
             i++;
         }
    
         return s2;
    } 
};