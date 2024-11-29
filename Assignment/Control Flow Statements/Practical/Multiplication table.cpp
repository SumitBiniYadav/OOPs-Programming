#include<iostream>
using namespace std;

class A{
	public:
		table()
		{
		int number;
		// Ask the user to enter a number
   		cout << "Enter a number to display its multiplication table: ";
   		cin >> number;

   		// Use a for loop to print the multiplication table
  		cout << "Multiplication table for " << number << " is:" << endl;
  		for (int i = 1; i <= 10; i++) 
		{
      	cout << number << " x " << i << " = " << number * i << endl;
   		 }
		}
};


main()
{
	A obj;
	obj.table();
}
