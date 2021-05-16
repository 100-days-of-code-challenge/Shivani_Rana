ques- The Hurdle Race
https://www.hackerrank.com/challenges/the-hurdle-race/problem
________________________________________________________________

int hurdleRace(int k, int height_count, int* height) {
  int max = height[0];
  for(int i=0;i<height_count;i++)
  {
      if(max<height[i])
      {
          max = height[i];
      }
  }
  int doses = 0; ;
  if((k-max)>=0)
  {
      doses = 0;
  }
  else{
      doses = max-k;
  }
  return doses;
  }

