MIRROR RIGHT TRIANGLE 

void staircase(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int j =i;j<n;j++)
        {
            printf(" ");
            
            
        }
        for(int k=1;k<=i;k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
