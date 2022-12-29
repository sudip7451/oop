#include<iostream>
using namespace std;

template<class T>

void sel(T array[],int n)
{
	int i,j,min;
	T temp;
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[min])
			min=j;
		}
		
		if(min!=i)
		{
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		}
	}
	cout<<"\nsorted array is:"<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<array[i]<<" ";
	}
}
int main()
{
	int n;
	int array[n];
	float arr[n];
	
	cout<<"enter the size of the array:";
	cin>>n;
	
	cout<<"enter the elements of INTEGER array:"<<endl;
	for(int i=0; i<n;i++)
	{
		cin>>array[i];
	}
	
	cout<<"enter the elements of FLOAT array:"<<endl;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	
	sel(array,n);
	sel(arr,n);
	
	return 0;	
	
}
