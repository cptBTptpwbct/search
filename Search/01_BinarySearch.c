#include<stdio.h>
#include<stdlib.h>
void Print(int arr[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void InsertSort(int arr[],int n)
{
	int i=0,j=0;
	int temp = -1;
	if(arr == NULL||n<0) return ;
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<temp)
				break;
			arr[j+1] = arr[j];
		}
		arr[j+1] = temp; 
	}
}
int BinarySearch(int arr[],int length,int num)
{
	int l,r,mid;
	l = 0;
	r = length-1;
	InsertSort(arr,length);
	Print(arr,length);
	while(l<=r)
	{
		mid = (l+r)/2;
		if(num == arr[mid]) 
			return mid;
		else if(num<arr[mid]) 
			r = mid-1;
		else 
			l = mid+1;
	}
	return -1;
}

int main()
{
	int arr[] = {20,10,34,9,6,89,7};
	int length = sizeof(arr)/sizeof(int);
	Print(arr,length);
	printf("%d\n",BinarySearch(arr,length,340)+1);
	system("pause");
	return 0;
}