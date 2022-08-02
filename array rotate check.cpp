#include <iostream>
using namespace std;
int arrayRotateCheck(int input[],int n)
{
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(input[i+1]>input[i])
        {
            count++;
            continue;
        }
        else
        {
            break;
        }
    }
    if(count<=n)
    {
        return count;
    }
    return 0;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}