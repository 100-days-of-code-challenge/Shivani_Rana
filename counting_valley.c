COUNTING VALLEY(HACKERRANK)
Q2- An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly  steps, for every step it was noted if it was an uphill, , or a downhill,  step. Hikes always start and end at sea level, and each step up or down represents a  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________-
int countingValleys(int steps, char* path) {
    int alt =0 ;
    int valley = 0;
    for(int i=0;i<steps;i++)
    {
        
        if(path[i]=='U')
        {
            alt++;
            if(alt==0)
            valley++;
        }
        else{
            alt--;
        }
       
        
    }
    
 return valley;
}
