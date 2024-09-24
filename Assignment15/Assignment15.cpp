// Assignment15.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
    int number; 
    
    //Get user input
    cout << "How many number of rows do you want to print: ";
    cin >> number;
    //Do a for loop for the user input amount
    for (int i = 0; i < number; i++) {
        
        //Do another for loop to actually print the start based on user input
        for (int j = 0; j <= i; j++)
            cout << "*";
        
        //End the line
        cout << endl;
    }
    //Finally return
    return 0;
}
