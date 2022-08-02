#include <iostream>
using namespace std;
bool checkPalindrome(char str[])
{
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    char x[count+1];
     for(int j=0;j<count;j++)
     {
         x[count-1-j]=str[j];
     }
     int val=0;
     for(int y=0;y<count;y++)
     {
         if(x[y]==str[y])
         {
             val++;
         }
         else
         {
             break;
         }

     }
     if(val==count)
     {
         return true;
     }
     return false;

}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}