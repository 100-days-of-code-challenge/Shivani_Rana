Gfg-> amazon-test-series
HEAP
K largest elements
________________________________________________________________________________

class Solution
{
    public:
    //Function to return k largest elements from an array.
    
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>v;
        priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);
        
        for(int i =k;i<n;i++)
        {
            if(pq.top()<arr[i])
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        while(!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};