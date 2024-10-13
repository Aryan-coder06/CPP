#include <iostream>
#include <string>
using namespace std; 


int main () {
    int i =0 , j;
    string text, temp ;
    cin >> text ;
    int size = text.length();
    cout << "The size : " << size << endl;
    temp = text;
    
    j = text.length() - 1;

	//Reversing the temp string.
	
    while (i < j) 
    {
        swap(text[i], text[j]);
        i++;
        j--;
    }

    if (temp == text) 
    {
        cout << "The string is a palindrome." << endl;
    } 
    else 
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}