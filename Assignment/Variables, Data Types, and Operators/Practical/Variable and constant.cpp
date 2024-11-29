#include<iostream>
using namespace std;

class A{
	public: 
		fun1()
		{
			string a;
			const string defa = "Hello !!";
			
			cout<<"Input your Name : ";
			cin>>a;
			
			
			cout<<""<<defa<<""<<a<<" Welcome !!"<<endl;
		}
};

main()
{
	A obj;
	obj.fun1();
	
}
