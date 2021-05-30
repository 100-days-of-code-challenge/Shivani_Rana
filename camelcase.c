hackerrank problem:- camelcase
https://www.hackerrank.com/challenges/camelcase/problem
________________________________________________________

int camelcase(char* s) {
    int count =1;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]<97)
        count++;
    }
    return count;

}