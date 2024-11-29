#include<iostream>
using namespace std;

class A{                 //creating a class named A
	public:              //using access specifier public so it can be accessed by everyone
		myfun()
		{
			int a,b;  
			
			cout<<"Enter A Number : ";
			cin>>a;
			
			cout<<"Enter A Number : ";
			cin>>b;
			
			
			int sum = a + b;
			
			cout<<"Sum of both Number is : "<<sum<<endl;
		}
};

main()
{
	A obj;            //creating object for class a
	obj.myfun();      //accessing the properties of class a using object
}
