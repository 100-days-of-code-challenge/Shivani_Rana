JUMPING ON CLOUDS
Q3- There is a new mobile game that starts with consecutively numbered clouds. Some of the clouds are thunderheads and others are cumulus. The player can jump on any cumulus cloud having a number that is equal to the number of the current cloud plus  or . The player must avoid the thunderheads. Determine the minimum number of jumps it will take to jump from the starting postion to the last cloud. It is always possible to win the game.

For each game, you will get an array of clouds numbered 0 if they are safe or 1 if they must be avoided.
_______________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
int jumpingOnClouds(int c_count, int* c) {
    int jump = 0;
    int i =0;
    while(i<c_count-1)
    {
        if((i+2<c_count) && c[i+2]==0)
        {
            jump+=1;
            i+=2;
        }
        else if((i+1 < c_count) && c[i+1]==0){
            jump+=1;
            i+=1;
            
        }
       
    }
     return jump; 
}  