#include<iostream>
using namespace std;
class b_sort
{
	private:
		int arr[50],flag,n,i,pass,j,temp;
	public:
		void get();
		void sort();
};
void b_sort::get()
{
	flag=0;
	while(flag==0)
	{
		cout<<"\nEnter no. of elements--->";
		cin>>n;
		if(n<=0 || n>50)
			cout<<"Invalid input!";
		else
		{
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter element "<<i+1<<"--->";
				cin>>arr[i];
			}
			flag++;
		}
	}
}
void b_sort::sort()
{
	cout<<"\nUnsortred elements--->\t";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	for(pass=0;pass<(n-1);pass++)
	{
		for(j=0;j<(n-1)-pass;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nSorted elements--->\t";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
}
int main()
{
	b_sort obj;
	obj.get();
	obj.sort();
	return 0;
}
