Hackerrank question -->
https://www.hackerrank.com/challenges/students-marks-sum/problem
__________________________________________________________________________

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum =0;
    if(gender == 'b')
    {
        for(int i=0;i<number_of_students;i+=2)
        {
            sum = sum + marks[i];
        }
        }
    else 
        {
            for(int i=1;i<number_of_students;i+=2)
        {
            sum = sum + marks[i];
        }
        
    }
  //Write your code here.
  return sum;
}
