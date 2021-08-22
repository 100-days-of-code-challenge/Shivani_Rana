largest number
https://www.interviewbit.com/old/problems/largest-number/


static bool mycomp(string a, string b)
{
    // this seems obvious after you see it
    return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A) 
{
    int n = A.size();
    
    // converting to string once instead of doing it in the comparator.
    vector<string> strA(n);
    for(int i=0; i<n; ++i)
        strA[i] = to_string(A[i]);
    
    // custom sort
    sort(strA.begin(), strA.end(), mycomp);
    
    // concatenation
    string ans = "";
    for(auto i : strA)
        ans += i;
        
    // remove leading 0's
    if(ans[0] == '0') return "0";
    
    return ans;
}