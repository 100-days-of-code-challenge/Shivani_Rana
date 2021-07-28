GREEDY APPROACH
https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
MEETING IN A ROOM

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(),v.end());
        
        int count =1;
        
        int e = v[0].first;;
        
        for(int i=1;i<n;i++)
        {
            if(e<v[i].second)
            {
                count++;
                e=v[i].first;
            }
        }
        return count;
        
        
    }
};