#include<iostream>
using namespace std;

main()
{
	int a = 42;
	double b = 3.14;
	
	//implicit conversion int to double
	double result =  a + b;
	
	//explicit conversion double to int
	int conv = (int)b;
	
	cout<<"Original double value : "<<b<<endl;
	cout<<"Explicit Conversion of int to double : "<<conv<<endl;
	
}
