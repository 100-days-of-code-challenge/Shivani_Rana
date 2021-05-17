ques- Angry Professor
https://www.hackerrank.com/challenges/angry-professor/problem
_____________________________________________________________________


char* angryProfessor(int k, int a_count, int* a) {
    char *s = malloc(100 *sizeof(char));
    s = "YES";
    char *p = malloc(100 *sizeof(char));
    p = "NO";
    int count =0;
    for(int i = 0;i<a_count;i++)
    {
        if(a[i]<=0)
        count++;
    }
    if(count>=k)
    return p;
    else 
     return s;
    

}