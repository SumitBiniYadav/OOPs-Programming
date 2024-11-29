#include<iostream>
using namespace std;

class A{
	public:
		int factorial(int n) 
		{
 		if (n <= 1) 
		{
       	return 1;  // Base case: factorial of 0 or 1 is 1
    	} 
		else
		{
        return n * factorial(n - 1);  // Recursive call
    	}
		}
};

main()
{
	A obj;
	int result = obj.factorial(4);     //passing arguments
	cout<<"The Factorial of 4 is : "<<result<<endl; //Displaying results
}
