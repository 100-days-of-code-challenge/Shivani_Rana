GFG Problem -> largest number formed from an array
https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1#
________________________________________________________________________________________-

class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	    // code here
	    string s;
	    sort(arr.begin(),arr.end(),[](string a, string b)
	    {
	        return a+b > b+a;
	    });
	    for(int i =0;i<arr.size();i++)
	    s += arr[i];
	    
	    return s;
	}
};