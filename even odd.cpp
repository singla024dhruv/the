#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=N;
    int sum1=0;
    int sum2=0;
    while (i>=0)
    {
        int b;
        b=N%10;
        if(b%2==0){
            sum1=sum1+b;

        }
        else
        {
            sum2=sum2+b;
        }
        i=N/10;
    }
    cout<<sum1<<" "<<sum2;
    cout<<"yes";
    return 0;
}
