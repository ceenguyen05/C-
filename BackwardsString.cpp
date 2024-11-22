#include <iostream>
using namespace std ;

void recursiveString (string , int) ;

int main () 
{
    string userInput ;
    cout << "Enter a string: " ;
    getline (cin , userInput) ;
    int stringLength = userInput.length() ;
    cout << "\nInput String: " << userInput << endl ;
    cout << "Output String: " ;
    recursiveString (userInput , stringLength ) ;
    return 0 ;
}

void recursiveString (string userInput , int stringLength)
{
    if (stringLength == 0)
    {
        return ;
    }
    else 
    {
        cout << userInput[stringLength - 1] ;
        userInput.pop_back() ;
        recursiveString(userInput , stringLength - 1) ;
        return ;
    }
}

