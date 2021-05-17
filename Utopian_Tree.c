Ques - Utopian Tree
https://www.hackerrank.com/challenges/utopian-tree/problem
________________________________________________________________

int utopianTree(int n) {
    int height =1;
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
          height *= 2;
      }
      else{
          height += 1;
      }
    }
return height;
}
