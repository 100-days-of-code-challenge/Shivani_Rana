Q9- BIRTHDAY CAKE CANDLES

int birthdayCakeCandles(int candles_count, int* candles) {
   int max = candles[0];
   int count = 0;
   for(int i=1;i<candles_count;i++)
    {
        if(max < candles[i])
        
        {
            max = candles[i];
        }
        
    }
for(int i =0;i<candles_count;i++)
{
    if(candles[i]==max)
    {
       count++;
    }
}
return count;
}
