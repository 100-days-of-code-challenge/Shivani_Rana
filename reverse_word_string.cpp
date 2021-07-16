GFG-> reverse words in a given string
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#
____________________________________________________________________________________

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
       vector<string>vs;
string w="";
for(int i=0; s[i]!='\0'; ++i)
{
if(s[i]=='.')
{
vs.push_back(w);
w="";
}
else
{
w+=s[i];
}
}
vs.push_back(w);
string ans="";
for(auto it=vs.rbegin(); it!=vs.rend(); ++it)
{
ans+=*it;// Note here i've concatenated a string to a string.
// We must not use s.push_back(*it) here because we can only push a character inside a string but can't push a string in a string.
   ans+='.';
}
ans.pop_back();
return ans;     
    } 
};