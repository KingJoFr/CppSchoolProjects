/***********************************Top Documentation*************************
 * Program:     ProgramKJF
 * Programmer:  King Jones-Frazier
 * Program Description:
 * Suppose that a text file ProgramYourFirstandLastInitials.dat
 * contains an unspecified number of scores. Write a program that 
 * reads the test scores from the file, sort the scores using 
 * Selection Sort, and then writes the numbers to the file 
 * ProgramYourFirstandLastInitials.out
 * 
 * sample input/output
 * ./ProgramKFJ < ProgramKJF.dat
 * Scores have been sorted and saved to ProgramKJF.out 
 */

 //Knowledge needed: Selection sort algorithm, reading from file, writing to a file.

 #include <iostream>
 #include <fstream>
 using namespace std;


 void selectionSort(double list[], int listSize)
 {
    for (int i = 0; i < (listSize - 1); i++)
     {
       // Find the minimum in the list[i..listSize-1]
       double currentMin = list[i];
       int currentMinIndex = i;
  
       for (int j = i + 1; j < listSize; j++)
       {
        if (currentMin > list[j])
         {
           currentMin = list[j];
           currentMinIndex = j;
         }
       }
   
       // Swap list[i] with list[currentMinIndex] if necessary;
       if (currentMinIndex != i)
       {
         list[currentMinIndex] = list[i];
         list[i] = currentMin;
       }
     }
    
 }

 void printList(double list[], int listSize)
 {
    for(int i = 0; i < 9; i++)
    {
        cout << list[i]<< " , ";
    }
 }

 int main()
 {
    //double list[] = {10, 12, 13, 8, 22, 89, 77, 76, 45};
    double score;
    ifstream input("ProgramKJF.dat");
    while (!input.eof())
    {
      input >> score;
      cout << score;
    }
    cout << "unsorted list"<< endl;
   /* printList(list, 9);
    

    selectionSort(list, 9);
    cout << endl;
    printList(list, 9);
    */
    return 0;
 }