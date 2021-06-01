Write a Program to check whether a string is a valid shuffle of two strings or not
__________________________________________________________________________________

bool isInterleave(string a, string b, string c) 
{
int i=0;int j=0;int k=0;

while(!c[k])
{
    if(a[i]==c[k])
    i++;
    
    else if(b[j]==c[k])
    j++;
    
    else
    return 0;
    
    k++;
    
}
if(a[i]||b[j])
return 0;

return 1;
}