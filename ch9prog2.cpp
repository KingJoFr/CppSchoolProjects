/**
 * (The EvenNumber class)

Define the EvenNumber class for representing an even number. The class contains:

A data field value of the int type that represents the integer value stored in the object.
A no-arg constructor that creates an EvenNumber object for the value 0.
A constructor that constructs an EvenNumber object with the specified value.
A function named getValue() to return an int value for this object.
A function named getNext() to return an EvenNumber object that represents the next even number after the current even number in this object.
A function named getPrevious() to return an EvenNumberobject that represents the previous even number before the current even number in this object.
Declare and implement the class. Write a test program using the template provided in the exercise. 
When you create a new submission, you'll notice a template code that includes a main function.
 Your task is to declare and implement the EvenNumber class in the place indicated by "// your code here".

 */

#include<iostream>
using namespace std;

class EvenNumber
{
    public:
        EvenNumber()
        {
            num = 0;
        }
        EvenNumber(int newNum)
        {
            num = newNum;
        }
        int getValue()
        {
            return num;
        }
        EvenNumber getNext()
        {
            EvenNumber a(num + 2);
            return a;
        }
        EvenNumber getPrevious()
        {
            int newNum = (num-2 >= 0) ? num-2 : 0;;
            EvenNumber b(newNum);
            return b;
        }
    private:
        int num;
};

 int main() {
  int intValue;
  cout << "Enter an integer: ";
  cin >> intValue;
  EvenNumber t(intValue * 2);
  cout << t.getValue() << endl;
  cout << t.getNext().getValue() << endl;
  cout << t.getPrevious().getValue() << endl;

  return 0;
}