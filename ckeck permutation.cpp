#include <iostream>
#include <cstring>
using namespace std;
bool isPermutation(char input1[],char input2[])
{
    int fn1[257];
    for(int i=0;i<257;i++)
    {
        fn1[i]=0;
    }
    int fn2[257];
    for(int i=0;i<257;i++)
    {
        fn2[i]=0;
    }
    int len1=strlen(input1);
    int len2=strlen(input2);
    for(int i=0;i<len1;i++)
    {
        fn1[input1[i]]++;
    }
    for(int i=0;i<len2;i++)
    {
        fn2[input2[i]]++;
    }
    for(int i=0;i<257;i++)
    {
        if(fn1[i]!=fn2[i])
        {
            return false;
            break;
        }
    }
    return true;
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}