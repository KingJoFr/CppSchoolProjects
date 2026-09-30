/*Given a list of numbers 
, 
, ..., 
 one can compute the mean and standard deviation using the following formulas:



To compute the standard deviation with this formula, you have first to store the individual numbers using an array, then you should compute the mean and eventually the standard deviation.

Your program should contain the following functions:

double mean(const double x[], int size)
// Compute the mean of an array of double values

double deviation(const double x[], int size)
// Compute the deviation of double values 
Write a test program that prompts the user to enter a list of 10 numbers in one line and displays the mean and standard deviation.

Sample Run

Enter numbers: 1.9 2.5 3.7 2 1 6 3 4 5 2 
The mean is 3.11
The standard deviation is 1.55738


**** to find the standard deviation take the squareroot of (summation of each number minus the mean) squared dividided by the number of numbers -1
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel5e.html.
*/

#include<iostream>
#include<cmath>

using namespace std;

double calculateMean(const double[], int);
double calculateDeviation(const double[], int, double );

int main(){

    const int arrSize = 10;
    double numArr[arrSize];
    double mean;
    double deviation;

    cout <<"Enter 10 numbers: "<< endl;

    for(int i = 0; i< 10; i++)
    {
        cin >> numArr[i];
        
    }
    mean = calculateMean(numArr, arrSize );
    deviation = calculateDeviation(numArr, arrSize, mean);

    cout << "The mean is: "<< mean << endl;
    cout << "The deviation is: "<< deviation<< endl;
}

double calculateMean(const double numArr[], int arrSize)
{
    double sum = 0;
    for(int i = 0; i< arrSize; i++)
    {
        sum = sum + numArr[i];
    }

    return sum/arrSize;
}

double calculateDeviation(const double numArr[], int arrSize, double mean)
{
    double innerDeviationCalc;
    double sumMinusMean;
    for(int i = 0; i< arrSize; i++)
    {
        sumMinusMean = sumMinusMean + pow((numArr[i] - mean), 2);
    
    }
    innerDeviationCalc = sumMinusMean/ (arrSize - 1);

    return sqrt(innerDeviationCalc);
}