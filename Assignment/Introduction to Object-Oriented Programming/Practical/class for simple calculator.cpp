#include<iostream>
using namespace std;

class Calculator{
	public:
		int a , b;
		
		addition(){
			cout<<"Enter A Number : ";
			cin>>a;
			
			cout<<"Enter A Number : ";
			cin>>b;
			
			int add = a + b;
			
			cout<<"Addition of two number is : "<<add<<endl;
			
		}
		
		substraction()
		{
			cout<<"Enter A Number : ";
			cin>>a;
			
			cout<<"Enter A Number : ";
			cin>>b;
			
			int sub = a - b;
			
			cout<<"Substraction of two number is : "<<sub<<endl;
		}
		
		multiplication()
		{
			cout<<"Enter A Number : ";
			cin>>a;
			
			cout<<"Enter A Number : ";
			cin>>b;
			
			int mult = a * b;
			
			cout<<"Multiplication of two number is : "<<mult<<endl;
		}
		
		division()
		{
			cout<<"Enter A Number : ";
			cin>>a;
			
			cout<<"Enter A Number : ";
			cin>>b;
			
			int div = a/b;
			
			cout<<"Division of two number is : "<<div<<endl;
		}
};

main()
{
	Calculator obj;
	
	int choice;
	cout<<"Press 1 for addition!"<<endl;
	cout<<"Press 2 for substraction!"<<endl;
	cout<<"Press 3 for multiplication!"<<endl;
	cout<<"Press 4 for division!"<<endl;
	cout<<"Press 5 for exit!"<<endl;
	cin>>choice;
	
	if(choice == 1)
	{
		obj.addition();
	}
	
	else if(choice == 2)
	{
		obj.substraction();
	}
	else if(choice == 3)
	{
		obj.multiplication();
	}
	else if(choice == 4)
	{
		obj.division();
	}
	else
	{
		cout<<"Thanks !";
	}
}
