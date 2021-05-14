q11-GRADING STUDENT
____________________________________________________________________________________
int* gradingStudents(int grades_count, int* grades, int* result_count) {
    // int res[grades_count];
    int *res= (int *)malloc(sizeof(int)*grades_count);
    for(int i=0;i<grades_count;i++)
    {
        if(grades[i]<38)
        {
           res[i]=grades[i];
            
        }
        else if(5-(grades[i]%5) < 3)
        {
           res[i] = (grades[i] + (5-(grades[i]%5)));
        }
        else {
            res[i]=grades[i];
        }
    }
    *result_count= grades_count;
    return res;

}