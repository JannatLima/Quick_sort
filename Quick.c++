//quicksort//
#include<iostream>
using namespace std;
class sorting
{
	public:
		void quicksort(int arr[], int low, int high)
		{
			if(low<high)
			{
				int pi;
				pi = partition(arr, low, high);
				quicksort(arr,low,pi-1);
				quicksort(arr, pi+1,high);
			}
		}
		int partition(int arr[],int low, int high)
		{
			int i,j;
			int pivot = arr[high];
			i = low-1;
			for(j=low; j<high; j++)
			{	
			if(arr[j]<pivot)
				{
					i++;
					swap(&arr[i], &arr[j]);
				}
			}
			swap(&arr[i+1], &arr[high]);
			return i+1;
		}
		void swap(int*a, int*b)
		{
			int t = *a;
			*a = *b;
			*b = t;
		}
	
		void printarray(int arr[], int size)
		{
			int i;
			for(i=0;i<size; i++)
			{
				cout<<arr[i]<<" ";
			}
		}
};
int main()
{
	int n;
	cout<<"Enter the number of elements:\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array:\n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sorting sort;
	sort.quicksort(arr,0,n-1);
	cout<<"Sorted array:\n";
	sort.printarray(arr,n);
		return 0;
}