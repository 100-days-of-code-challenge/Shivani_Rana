find missing and repeateing
https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
_____________________________________________________________


class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int A[n+1]={0};
        int *res = new int(2);
        for(int i =0;i<n;i++){
            A[arr[i]]++;
            
        }
        for(int i =0;i<=n;i++){
            if(A[i]==2){
                res[0] = i;
            }
            if(A[i]==0)
            res[1]= i;
        }
        
        
        return res;
        // code here
    }
};