#include <iostream>
#include <string.h>
using namespace std;
int low=0;
bool helperfunction(char input[],int s,int h)
{
    if(h==0||s>=h)
    {
        return true;
    }
    if(input[s]!=input[h])
    {
        return false;
    }
    bool smalloutput=helperfunction(input,s+1,h-1);
    return smalloutput;
}
bool checkPalindrome(char input[])
{
    int s=0;
    int h=strlen(input)-1;
  bool output=helperfunction(input,s,h);
  return output;
  


  

  
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
