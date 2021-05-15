QUES- Number Line Jump
______________________________________________________


char* kangaroo(int x1, int v1, int x2, int v2) {
    
    if(v1==v2)
    {
        if(x1==x2)
        {
            return "YES";
        }
        else {
            return "NO";
        }
        
    }
    float t=(x2-x1) / (v1-v2);
    if(t<0){
        return "NO";
    }
    else{
        int r= (x2-x1)%(v1-v2);
        if(r==0)
        {
            return "YES";
        }
        else{
            return "NO";
        }
    }
}