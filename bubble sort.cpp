#include <iostream>
using namespace std;
void bubbleSort(int input[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        int current=0;
        for(int i=1;i<n;i++)
        {
            if(input[current]>input[i])
            {
                int temp=input[current];
                input[current]=input[i];
                input[i]=temp;


            }
            current=i;
        }
    }
    
}
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}