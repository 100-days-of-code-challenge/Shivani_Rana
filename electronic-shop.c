hackerrank problem:-electronics-shop
https://www.hackerrank.com/challenges/electronics-shop/problem


int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    /*
     * Write your code here.
     
     */
     int flag = 0;
     int max =0;
     for(int i=0;i<keyboards_count;i++)
     {
         for(int j=0;j<drives_count;j++)
         {
           int  price = keyboards[i] + drives[j];
           
           if(price<=b)
           {
               if(max<price)
               {
                   max = price;
                   flag =1;
               }
           }
          
           }
           
         }
         
     
if(flag==1)
{
    return max;
}
else 
return -1;


}