SALES BY MATCH(HACKERRANK PROBLEM)
Q1-There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.


int sockMerchant(int n, int ar_count, int* ar) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(ar[i]!=0){
             for(int j=i+1; j<n; j++){
                if(ar[i]==ar[j]){
                    count++;
                    ar[j]=0;
                    break;
                    }
                }           
        }
    }
    return count;
}
