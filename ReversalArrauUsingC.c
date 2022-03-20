#include<stdio.h>
void arrayRev(int arr[])
{
    
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
    arrayRev(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d", i , arr[i]);
    }
    
	return 0;
}
