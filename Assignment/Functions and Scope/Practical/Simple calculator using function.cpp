#include<iostream>
using namespace std;

class A{
	public:
		int a , b;
		
		add()
		{
			int adds=a+b;
			cout<<"Addition of "<<a<<" & "<<b<<" is "<<adds<<endl;
		}
		
		sub()
		{
			int subs=a-b;
			cout<<"Substraction of "<<a<<" & "<<b<<" is "<<subs<<endl;
		}
		
		divide()
		{
			int div=a/b;
			cout<<"Division of "<<a<<" & "<<b<<" is "<<div<<endl;
		}
		
		multiply()
		{
			int mult=a*b;
			cout<<"Multiply of "<<a<<" & "<<b<<" is "<<mult<<endl;
		}
};

main()
{
	A obj;
	int choice;
	
	cout<<"Enter A Number : ";
	cin>>obj.a;
	
	cout<<"Enter A Number : ";
	cin>>obj.b;
	
	cout<<"Press 1 for Addition"<<endl;
	cout<<"Press 2 for Substraction"<<endl;
	cout<<"Press 3 for Multiplication"<<endl;
	cout<<"Press 4 for Division"<<endl;
	cout<<"Press 5 for Exit"<<endl;
	cin>>choice;
	
	if(choice = 1)
	{
		obj.add();
	}
	else if(choice = 2)
	{
		obj.sub();
	}
	else if(choice = 3)
	{
		obj.multiply();
	}
	else if(choice = 4)
	{
		obj.divide();
	}
	else if(choice = 5)
	{
		cout<<"Thank You !!!"<<endl;
	}
	else
	{
		cout<<"Invalid Input !!!"<<endl;
	}
	
}


