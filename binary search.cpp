#include <iostream>
using namespace std;
int binarySearch(int input[],int n,int x)
{
    int start=0;
    int end=n-1;
    int mid;
    for(int i=0;i<n;i++)
    {
        mid=(start+end)/2;
        if(input[mid]==x)
        {
            return mid;
            break;
        }
        else if(input[mid]>x)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
    return -1;
}
int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}