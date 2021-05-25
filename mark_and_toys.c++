ques-Mark and Toys
https://www.hackerrank.com/challenges/mark-and-toys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=sorting
_______________________________________________________________________________________________________________________________________________________

int maximumToys(vector<int> prices, int k) {
        sort(prices.begin(), prices.end());
    
    int t = 0;
    for(vector<int>::iterator it = prices.begin(); it != prices.end(); it++)
    {
        if(*it <= k)
        {
            t++;
            k -= *it;
        }
        else break;
    }
    return t;
    

}
