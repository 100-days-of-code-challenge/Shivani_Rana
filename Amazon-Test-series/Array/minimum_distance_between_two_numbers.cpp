gfg
amazon series
minimum distance betweeen two numbers
https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1/?track=amazon-arrays&batchId=192#


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int diff = INT_MAX;
        int index1 = -1;
        int index2 =-1;
        for(int i =0;i<n;i++){
            if(a[i]==x)
            index1 = i;
            if(a[i]==y)
            index2 = i;
            
            if(index1!=-1 && index2!=-1){
                diff = min(diff,abs(index1-index2));
            }
        }
        if(diff == INT_MAX)
        return -1;
        return diff;
       
    }
};
