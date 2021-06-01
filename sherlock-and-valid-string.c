hackerrank problem - sherlock-and-valid-string
https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem




char* isValid(char* s) {
    int l = strlen(s);
    int arr[26]={0};
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            arr[s[i]-'a'] = arr[s[i]-'a']+1;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            arr[tolower(s[i])-'a'] = arr[tolower(s[i])-'a']+1;
        }
        
    }



    int new_arr[26]= {0}, len= 0;

    for(int i=0; i<26; i++) {
        if(arr[i])
            new_arr[len++]= arr[i];
    }

    if(len == 0 || len == 1) {
        return "YES";
    }

    if(new_arr[0] != new_arr[1] && new_arr[1] != new_arr[2] && new_arr[0]!=new_arr[2])
        return "NO";

    int most_freq= new_arr[0]==new_arr[1]?new_arr[0]:new_arr[1] == new_arr[2]? new_arr[1]:new_arr[2];


    int non_freq_count= 0;
    for(int i=0; i<len; i++) {
        if(new_arr[i]!= most_freq) {
            non_freq_count++;
            if(non_freq_count>1)
                return "NO";
            if(new_arr[i]+1 != most_freq && new_arr[i]-1 != most_freq && new_arr[i]!= 1){
                return "NO";
            }
        }
    }

    return "YES";

     
}
