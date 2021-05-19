ques- sequence equation
https://www.hackerrank.com/challenges/permutation-equation/problem
____________________________________________________________________________




int* permutationEquation(int p_count, int* p, int* result_count) {
    
    int* arr = malloc((p_count+1) * sizeof(int));
    int y=0;
    for(int x = 1; x < p_count+1; x++){
        for(int j = 1; j < p_count+1; j++){
            if(x == p[j-1]){
                for(int i = 1; i < p_count+1; i++){
                    
                    if(j == p[i-1]){
                        arr[y]=i;
                        y++;
                    }
                }
            }
        }
    }
   *result_count = p_count;
    return arr;

}