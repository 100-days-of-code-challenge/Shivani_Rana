Anagram
gfg
media.net
https://practice.geeksforgeeks.org/problems/anagram-1587115620/1/?company[]=Media.net%20&company[]=Media.net%20&page=1&query=company[]Media.net%20page1company[]Media.net#

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        
        
    int n = a.size();
    int m = b.size();
    if(n != m)
    return 0;
    
    
    int arr[26]={0};
    
    for(int i =0;i<n;i++){
        arr[a[i]-'a']++;
        
    }
    for(int i =0;i<m;i++){
        arr[b[i]-'a']--;
    }
    for(int i =0;i<26;i++){
        if(arr[i]!=0)
        return 0;
    }
    return 1;
    }

};
