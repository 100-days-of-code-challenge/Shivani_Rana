triplet sum

int lessthan(vector<string>&A,int n,int y)
{
    sort(A.begin(),A.end());
    int c = 0,j,k;
    int s =0;
    
    for(int i =0;i<n-2;i++){
        j = i+1;
        k = n-1;
        while(j!=k){
            s = stoi(A[i])+stoi(A[j])+stoi(A[k]);
            if(s>y){
                k--;
            }
            else{
                c = c+(k-j);
                j = j+1;
            }
            
        }
    }
    return c;
}

int Solution::solve(vector<string> &A) {
    int n = A.size();
    int ans ;
    ans = lessthan(A,n,2)-lessthan(A,n,1);
    
    if(ans>1)
    return 1;
    else 
    return 0;
}