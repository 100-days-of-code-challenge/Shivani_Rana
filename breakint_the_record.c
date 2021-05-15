ques- Breaking The Records


int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int* result = (int*)malloc(sizeof(int)*2);
    
    int min = scores[0];
    int max = scores[0];
    int mincount =0;
    int maxcount=0;
    for(int i=1;i<scores_count;i++)
    {
        if(scores[i]<min)
        {
            min = scores[i];
            mincount+=1;
        }
        if(scores[i]>max)
        {
            max = scores[i];
            maxcount +=1;
        }
    }
    
    
  result[0] = maxcount ;
  result[1] = mincount;
 *result_count = 2;
  return result;
}
