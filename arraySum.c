A VERY BIG SUM (HACKERRANK)
Q5- In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.


long aVeryBigSum(int ar_count, long* ar) {
    long sum=0;
    long i;
    for(i=0;i<ar_count;i++)
    {
        sum += ar[i];
    }
return sum;
}