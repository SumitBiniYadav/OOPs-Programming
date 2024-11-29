#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) 
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right) 
	{
        // Compare characters at both ends of the string
        if (str[left] != str[right]) 
		{
            return false; // Not a palindrome
        }
        left++;
        right--;
    }

    return true; // Is a palindrome
}

main() 
{
    string input;

    // Take input string
    cout << "Enter a string: ";
    getline(cin, input);

    // Check if the string is a palindrome
    if (isPalindrome(input)) 
	{
        cout << "The string is a palindrome!" << endl;
    } else
	{
        cout << "The string is not a palindrome." << endl;
    }

}

