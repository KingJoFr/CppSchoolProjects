#include <iostream>
using namespace std;

/*(Binary to decimal)
Write a function that returns a decimal number from a binary string. The function header is as follows:
int bin2Dec(const string& binaryString)
For example, bin2Dec(10001) is 17 as:
Write a test program that prompts the user to enter a binary number as a string and displays its decimal equivalent value.
Sample Run

Enter a binary number: 1110100110101
The decimal value is 7477
*/
int bitPower(int stringNum, int exp)
    { 
         //cout <<" inside bitPower "<< endl;
         //cout <<" static cast of num and exp: " << stringNum << " "<< exp <<" " << static_cast<int>(stringNum) << " "<< static_cast<int>(exp)<< endl;
        int result = 1;
        if (static_cast<int>(stringNum) == 48)
        {
           // cout << "bit returned 0" << endl;
            return 0;
        }else if (static_cast<int>(exp) == 48)
        {
            //cout << "bit returned 1"<< endl;
            return 1;
        }else
        {
       
            for(int i = 1; i <= exp; i++ )
            {
                result = result * 2;
            }
            return result;
        }
        
    }
    int bin2Dec(const string& binaryString)
    { 
        int returnedBit;
        int result = 0 ;
    
        int i = binaryString.length()-1;
        int exp = 0;
        //cout << "inside bit2dec"<< endl;
        while( i >= 0  )
        {
          returnedBit = bitPower(binaryString[i], exp);
          //cout << "returnedBit is: "<< returnedBit<< endl;
          result = result + returnedBit;
          i--;
          exp++;
          //cout << result << endl;
        }
        return result;
    }
int main()
{
    string bit;
    cout << "Enter a binary number: " << endl;
    cin >> bit;
    if(bit != ""){
        cout << bin2Dec(bit);
    }else
    {
        cout<< "Please enter a number" << endl;
    }
    return 0;
    
}