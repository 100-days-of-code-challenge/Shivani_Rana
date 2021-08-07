Rotate bit
Bit manipulation
https://practice.geeksforgeeks.org/problems/rotate-bits4524/1#
____________________________________________________________________
class Solution
{
  public:
  int left_rotation(int n, int d)
  {
      
      return (n<<d) | (n>>(16-d));
  }
  int right_rotation(int n,int d)
  {
      return (n>>d)|(n<<(16-d));
  }
  
        vector <int> rotate (int n, int d)
        {
            //code here.
           d %= 16;
            vector<int>ans;
           unsigned short int x = left_rotation(n,d);
            unsigned short int y = right_rotation(n,d);
          
            ans.push_back(x);
            ans.push_back(y);
            return ans;
        }
};