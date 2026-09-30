#include <cctype>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

int stringToNumber(const char str[]);

int main()
{
  char str[] = "13";
  stringToNumber(str);
}

int stringToNumber(const char str[])
{
  int result = 0;
  char temp[strlen(str) ];
  int length = strlen(str);
  cout << "length of str"<< strlen(str)<< endl;
  int counter = 0;
  int i = 0;

  // Write your code here
  //check if outside range of numberselse if(i == strlen(str)-1)

  
  if(static_cast<int>(str[0]) >= 58 || static_cast<int>(str[0]) <=47)
  {
    result = 0;
    return result;
  }

  for(; i < length; i++)
  {
    
    if(static_cast<int>(str[i]) >= 48 && static_cast<int>(str[i])<= 57)
    {
    
      cout << "counter " << counter << endl;
      temp[counter] = str[i];
       counter++;
      
    }
  
  }
  temp[counter] = '\0';
  int a = 0;
   for(int k = strlen(temp)-1; k>=0; k--)
      {
        cout << "k " << k<< endl;
        result = result + ((temp[k] - 48) * pow(10, a));
       
        cout << "result: "<< result<< endl;
        a++;
      }
  return result;
}