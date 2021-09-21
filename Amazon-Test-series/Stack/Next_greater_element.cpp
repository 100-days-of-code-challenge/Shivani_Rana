Next greater element
Gfgmust do
https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#



class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>v;
        stack<long long>s;
        
        for(int i = n-1;i>=0;i--){
        
        if(s.empty()){
            v.push_back(-1);
        }
        
        else if(s.size()>0 && s.top()>arr[i])
        v.push_back(s.top());
        
        
        else if(s.size()>0 && s.top()<arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0)
            v.push_back(-1);
            
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
