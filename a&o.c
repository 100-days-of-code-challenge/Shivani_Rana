Ques- APPLE & ORANGE
__________________________________________________________________________________________________________________________

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int count1=0,count2=0;
    for(int i=0;i<apples_count;i++)
    {
        apples[i]= apples[i]+a;
    }
    for(int i=0;i<oranges_count;i++)
    {
        oranges[i]= oranges[i]+b;
    }
    for(int i=0;i<apples_count;i++)
    {
        if((apples[i] >=s) && (apples[i]<=t))
        {
            count1++;
        }
    }

 for(int i=0;i<oranges_count;i++)
    {
        if((oranges[i] >=s) && (oranges[i]<=t))
        {
            count2++;
        }
    }
    printf("%d\n",count1);
    printf("%d",count2);
}