#include <iostream>
using namespace std;
int duplicateNumber(int input[],int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(i==k)
            {
                continue;
            }
            else if(input[k]==input[i])
            {
                return input[k];
                break;
            }
            else
            {
                continue;
            }
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}