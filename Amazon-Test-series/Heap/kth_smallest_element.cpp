max heap
Kth smallest element
https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1# 


int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int>mh;
        
        for(int i =l;i<=r;i++){
            mh.push(arr[i]);
            
            if(mh.size()>k){
                mh.pop();
            }
            
        }
       return mh.top(); 
    }
};