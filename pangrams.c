char* pangrams(char* s) {
    int n = strlen(s);
    int i;
    
    int mark[26]={0};
    
     char* a = malloc(100 * sizeof(char));
     char* b = malloc(100 * sizeof(char));
     
     
     
     a = "not pangram";
     b = "pangram";
 hackerrank question  - pangrams
https://www.hackerrank.com/challenges/pangrams/problem
_________________________________________________________   

    
for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z')
        mark[s[i]-'a'] = 1;
        else if(s[i]>='A' && s[i]<='Z')
        mark[tolower(s[i])-'a'] = 1;

    }


    for(i=0; i<26; i++){
//        printf("%d ", i);
        if(!mark[i])break;
    }
//    printf("\n");
    if(i==26)
    return b;
    else
    return a;
}
         