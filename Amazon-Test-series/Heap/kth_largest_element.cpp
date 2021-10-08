heap
kth largest element
using minheap

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>v;
        priority_queue<int,vector<int>,greater<int>>minh;
        
        for(int i = 0;i<n;i++){
            minh.push(arr[i]);
            if(minh.size()>k)
                minh.pop();
            
            
            
            }
        
        while(minh.size()!=0){
                v.push_back(minh.top());
                minh.pop();
        }
        sort(v.begin(),v.end(),greater<int>());
        return v;
       
    }
};