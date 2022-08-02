
#include <iostream>
using namespace std;

void arrange(int arr[],int n)
{
	int s=0;
	int e=n-1;
	int val=1;
	if(n%2==0)
	{
	while(s<=e)
	{ 
		arr[s]=val;
		val++;
		arr[e]=val;
		val++;
		s++;
		e--;

	}
    }
	else
	{
		while(s<e)
	{ 
		arr[s]=val;
		val++;
		arr[e]=val;
		val++;
		s++;
		e--;

	}
	if(s==e)
	{
		arr[s]=n;
	}
	}
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}