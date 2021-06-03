//*******************************************************************************/
gfg problem....
implementing 2 stack with single array
_________________________________________________________________________________________



#include <stdio.h>
#define n 100
//int stack[MAX];
int top1 =-1;
int top2 =n;
void push1(int arr[],int item)
{
    if(top1+1 == top2 )
    {
        printf("overflow");
        
    }
    else
    {
        top1 = top1+1;
        arr[top1]= item;
        printf("now top of the element is %d\n",arr[top1]);
    }
    
}

int pop1(int arr[])
{
    int temp;
    if(top1 ==-1)
{
    printf("underflow");
    return -1;
}
else
 {
     temp = arr[top1];
     top1 = top1-1;
     printf("%d\n",temp);
 }
 return temp;
}

void push2(int arr[],int item)
{
    if(top1+1 == top2)
    {
        printf("overflow");
        
    }
    else
    {
        top2 = top2-1;
        arr[top2]= item;
        printf("now top of the element is %d\n",arr[top2]);
    }
    
}

int pop2(int arr[])
{
    int temp;
    if(top2 ==n)
{
    printf("underflow");
    return -1;
}
else
 {
     temp = arr[top2];
     top2 = top2+1;
     printf("%d\n",temp);
 }
 return temp;
}


int main()
{
   int stack[n];
   int top = -1;
   push1(stack,2);
   push1(stack,3);
   push2(stack,4);
   
   
   pop1(stack);
   pop2(stack);
    
    return 0;
}

  