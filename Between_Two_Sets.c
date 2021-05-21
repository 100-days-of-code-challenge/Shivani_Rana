ques- Between Two Sets
https://www.hackerrank.com/challenges/between-two-sets/problem
____________________________________________________________________


int getTotalX(int a_count, int* a, int b_count, int* b) {
    
    int count = 0;
       
    for(int x=1; x<=100; x++){
        
        int flag = 1;
        
        for(int a_i = 0; a_i < a_count; a_i++){
            for(int b_i = 0; b_i < b_count; b_i++){
                if(x % a[a_i] || b[b_i] % x)
                 flag = 0;
            }               
        }
        
        if(flag)
         count++;
    }