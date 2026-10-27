/*************
 * Program: KJVectors
 * Programmer: King Jones-Frazier
 * Program Description:
 * This program returns the intersection of 2 vectors. It uses the find function
 * to find and a loop to loop for each element of a vector insider the other.
 * It adds the element to a third vector which is then returned at the end.
 * 
 * sample input/output:
 * Enter five elements for vector1: Sacramento Los Angeles Pasadena Beverly Hills
 * Enter five elements for vector2: Houston San Antonio Pasadena Beverly Hills
 * The common strings are Pasadena Beverly Hills
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory> //for smart pointers
using namespace std;


template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2)
{
    vector<T> v3;
    for(int i = 0; i< v1.size(); i++)
    {
     
        if(find(v2.begin(), v2.end(), v1[i]) != v2.end())  //returns the element v1[i] if it is in v2 else return v2.end()
        {
            v3.push_back(*find(v2.begin(), v2.end(), v1[i]));// adds that element to the new vector
        }
    }
    return v3;
}

int main()
{
    vector<string> v1;
    vector<string> v2;
    string element;
    cout<<"Enter five elements for vector1: ";
    for(int i = 0; i< 5; i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    cout<<"Enter five elements for vector2: ";
    for(int i = 0; i< 5; i++)
    {
        cin >> element;
        v2.push_back(element);
    }
    vector<string> result = intersection(v1, v2);
    cout<<"The common strings are ";
    for(string e: result) // can't print vector directly, must print each element one at a time.
    {
        cout << e << " ";
    }

    return 0;
}