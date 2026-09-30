
#include <iostream>
using namespace std;

double findMax(double[]);
void grader(double[], double);
int main()
{
    int temp;
    double scores[100];
    int students;
    for(int i = 0; i< 100; i++)
    {
        scores[i] = 0;
    }
    cout<< "Enter the number of students: "<< endl;
    cin >> students;

    cout << "Enter " << students << " scores: " << endl;
    for(int i = 0; i < students; i++)
    {
        cin >> scores[i];
        
    }
    scores[students] = '\0';

    cout << " the best score is: " << findMax(scores)<< endl;
    double best = findMax(scores);

    grader(scores, best);

    return 0;

    
}

double findMax(double list[])
{
       int i = 0;
       double max = list[i];
       
  
       for (; list[i] !='\0'; i++)
       {
        if (max < list[i])
         {
           max = list[i];
           
         }
       }
       return max;
}

void grader(double list[], double best)
{
    for(int i = 0; list[i] != '\0'; i++)
    {
        if(list[i] >= best-10)
        {
            cout <<  "Student " << i+1 << " score is " << list[i] << " and grade is " << "A"<< endl;
        }else if(list[i] >= best - 20)
        {
            cout <<  "Student " << i+1 << " score is " << list[i] << " and grade is " << "B"<< endl;
        }else if(list[i] >= best - 30)
        {
            cout <<  "Student " << i+1 << " score is " << list[i] << " and grade is " << "C"<< endl;
        }else if(list[i] >= best-40)
        {
            cout <<  "Student " << i+1 << " score is " << list[i] << " and grade is " << "D"<< endl;
        }
    }
}
      
    
 