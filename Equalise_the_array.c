ques- Equalize the array
https://www.hackerrank.com/challenges/equality-in-a-array/problem

int equalizeArray(int arr_count, int* arr) {
     int res = 0, count = 0;
    for(int i = 0; i < arr_count; i++) {
        count = 0;
        for(int j = i; j < arr_count; j++) {
            if(arr[j] == arr[i])
                count++;
        }
        if (count > res)
            res = count;
    }
       return arr_count - res;
}
