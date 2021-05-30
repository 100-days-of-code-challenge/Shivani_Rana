gfg problem:- printing duplicates in a string
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
___________________________________________________________________________________

void printing_duplicates(s)
{
  int n = strlen(s);
  int arr[26] = {0};
for(int i=0;i<n;i++)
{
  if(s[i]>='a' && s[i]<='z')
    arr[s[i]-'a'] = arr[s[i]-'a']+1;

  else if(s[i]>='A' && s[i]<='Z') 
    arr[tolowers[i]-'a'] = arr[s[i]-'a']+1;

}

for(int i=0;i<n;i++)
{
  if(arr[i]>1)
  printf(" %c has been seen %d times", i+'a', arr[i]);
}
}