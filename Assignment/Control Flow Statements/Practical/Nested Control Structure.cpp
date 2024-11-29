#include<iostream>
using namespace std;

class A{
	public:
		pattern()
		{
		int n;

    	// Ask the user to enter the number of rows
    	cout << "Enter the number of rows: ";
    	cin >> n;

    	// Outer loop to handle the number of rows
    	for (int i = 1; i <= n; i++) {
        // Inner loop to print the stars in each row
        	for (int j = 1; j <= i; j++) {
            cout << "*";  // Print a star
        	}
        cout << endl;  // Move to the next line after each row
    	}
		}
};

main()
{
	A obj;
	obj.pattern();
}
