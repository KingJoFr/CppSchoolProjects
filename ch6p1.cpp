#include <iostream>
using namespace std;

 double power(double num, int exp)
    {
        double result = 1;
        for(int i = 0; i < exp; i++)
        {
            result = result * num;
            
        }
        return result;
    }

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
{  
    double result = investmentAmount;
    int monthsPerYear = 12;
    for(int i = 1; i <= years; i++)
    {
        
        result = investmentAmount * power(1+ ((monthlyInterestRate/100)/12), monthsPerYear);
        cout << i << "       "<< result << endl;
        investmentAmount = result;
    }
    return result;
}
int main(){
    double years = 30;
    double val;
    double investmentAmount = 1000;
    double monthlyInterestRate = 0.05;

    
    cout << "Enter loan amount, for example 120000.95: " << endl;
    cin >> investmentAmount;
    cout << "Enter yearly interest rate, for example 8.25: "<< endl;
    cin >> monthlyInterestRate;
    cout << "Years    Future Value"<< endl;
    
    futureInvestmentValue(investmentAmount, monthlyInterestRate, years);
}
