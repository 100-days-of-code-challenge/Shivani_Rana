/******************************************************************************
imlementing stack using array
*******************************************************************************/

#include <stdio.h>
#define MAX 10000
//int stack[MAX];
int top =-1;

void push(int arr[],int item)
{
    if(top == MAX)
    {
        printf("overflow");
        
    }
    else
    {
        top = top+1;
        arr[top]= item;
        printf("now top of the element is %d\n",arr[top]);
    }
    
}

int pop(int arr[])
{
    int temp;
    if(top ==-1)
{
    printf("underflow");
    return -1;
}
else
 {
     temp = arr[top];
     top = top-1;
     printf("%d\n",temp);
 }
 return temp;
}


int main()
{
   int stack[MAX];
   int top = -1;
   push(stack,2);
   push(stack,3);
   push(stack,4);
   
   
   pop(stack);
   pop(stack);
    
    return 0;
}
