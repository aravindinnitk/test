#include <iostream>
#include<string.h>

using namespace std;
bool
isPalindrome (char *str)
{
  int i = 0;
  int n=0;
  char *p = str;
  while (*p++ != '\0')
      n++;
    n--;  
  while (i < n)
    {
        if(str[i] == ' '){
            i++;
            continue;
        }
        if(str[n] == ' '){
            n--;
            continue;
        }
        
        if(str[i] < '0' || str[i] > '9'){
        if(str[i]-32  == str[n] || str[i] == str[n]-32)
        {
            i++;
            n--;
            continue;
        }
        }
      if (str[i] != str[n]  )
	return false;
      i++;
      n--;
    }
  return true;
}

int main ()
{
  char str[100];
  strcpy (str, "Hello World");
  cout << isPalindrome (str)<< endl;
  strcpy (str, "Step on no pets");
  cout << isPalindrome (str) << endl;
   strcpy (str, "Dad");
  cout << isPalindrome (str) << endl;
 strcpy (str, "1881");
 cout << isPalindrome (str) << endl;
 
 strcpy (str, "123D321");
  cout << isPalindrome (str) << endl;
  strcpy (str,"Do geese see God");
  cout << isPalindrome (str) << endl;
  strcpy (str,"Was it a car or a cat I saw");
  cout << isPalindrome (str) << endl;
  return 0;
}