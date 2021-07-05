geeksforgeeks- recursion problem -> subsetsums
https://practice.geeksforgeeks.org/problems/subset-sums2234/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion#
___________________________________________________________________________________________________________________________________________________________

class Solution
{
public:

      void ssum(vector<int>arr, vector<int>&ans,int i, int sum, int N)
      {
          if(i==N)
          {
              ans.push_back(sum);
              return;
          }
          
          ssum(arr,ans,i+1,sum,N);
          sum = sum+arr[i];
          ssum(arr,ans,i+1,sum,N);
          
          
      }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        int sum =0;
        ssum(arr,ans,0,sum,N);
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};