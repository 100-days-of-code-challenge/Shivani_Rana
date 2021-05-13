Q5- DIAGONAL DIFFERENCE


int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<arr_rows;i++)
    {
        
            
            
                sum1 = sum1+arr[i][i];
                 
                sum2 = sum2+arr[i][arr_rows-1-i];
            }
            
        
    
   
    int difference = abs( sum1 - sum2);
    return difference;

}
