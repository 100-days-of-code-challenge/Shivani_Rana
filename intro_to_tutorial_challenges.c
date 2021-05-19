ques- INTRO TO TUTORIAL CHALLENGES
https://www.hackerrank.com/challenges/tutorial-intro/problem
__________________________________________________________________


int introTutorial(int V, int arr_count, int* arr) {
     int ans;
    for(int i=0;i<arr_count;i++)
    {
        if(arr[i]==V)
        {
            ans = i;
            break;
        }
    }
    
return ans;
}