#include<iostream>
using namespace std;

class A{
	public:
		marks()
		{
			int a, b, c;
			cout<<"Enter English Marks : ";
			cin>>a;
			
			cout<<"Enter Science Marks : ";
			cin>>b;
			
			cout<<"Enter Maths Marks : ";
			cin>>c;
			
			int avrg = (a+b+c)/3;
			
			if(avrg <= 30)
			{
				cout<<"Failed"<<endl;
			}
			else if(avrg <= 70)
			{
				cout<<"Passed"<<endl;
			}
			else if(avrg < 100)
			{
				cout<<"Passed with Distinction"<<endl;
			}
			else
			{
				cout<<"Invalid Input !!"<<endl;
			}
		}
};

main()
{
	A obj;
	obj.marks();
}
