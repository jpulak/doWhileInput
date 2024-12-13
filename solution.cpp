// Program for gathering int values using do-while

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   
   //initialize vars
   
    int num = 1;
    int user;
    char goAgain;
    int positive = 0;
    int sum = 0;
    int negative = 0;
    int product = 1;
    int zero = 0;
    
    // do-while loop
    
    do 
    {
        cout << "Enter whole number " << num << ": ";
        cin >> user;
        if (user > 0) 
        {
            positive += 1;
            sum += user;
        } 
        else if (user < 0) 
        {
            negative += 1;
            product *= user;
        } 
        else 
        {
            zero += 1;
        }
        cout << "Would you like to enter another number?" << endl
             << "Enter Y for Yes or N for No: ";
        cin >> goAgain;
        ++num;
    } while (goAgain == 'Y' || goAgain == 'y');

    // positive number results
    
    cout << endl;
    if (positive == 0) 
    {
        cout << "No positive values were entered." << endl;
    } 
    else if (positive == 1) 
    {
        cout << "One positive value was entered. It was a " << sum << "." << endl;
    } 
    else 
    {
        cout << positive << " positive values were entered. Their sum was " << sum << "." << endl;
    }

    // negative number results
    
    if (negative == 0) 
    {
        cout << "No negative values were entered." << endl;
    } 
    else if (negative == 1) 
    {
        cout << "One negative value was entered. It was a " << product << "." << endl;
    } 
    else 
    {
        cout << negative << " negative values were entered. Their product was " << product << "." << endl;
    }

    // zero results
    
    if (zero == 0) 
    {
        cout << "No zeroes were entered." << endl;
    } 
    else if (zero == 1) 
    {
        cout << "One zero was entered." << endl;
    } 
    else 
    {
        cout << zero << " zeroes were entered." << endl;
    }
    return 0;
}
