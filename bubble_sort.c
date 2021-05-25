// BUBBLE SORT


#include<stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[],int n)
{

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        
    }
}

int main()
{
	
int array[5] = {5,4,3,2,1};
bubble_sort(array,5);
printf("sorted array\n");
printarray(array,5);
return 0;
}