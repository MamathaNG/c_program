#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10], i, j, Size, Count = 0;

	printf("\n Enter Number of elements in an array  :   ");
	scanf("%d", &Size);

	printf("\n Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in the Array  =  %d ", Count);
    return 0;
}
