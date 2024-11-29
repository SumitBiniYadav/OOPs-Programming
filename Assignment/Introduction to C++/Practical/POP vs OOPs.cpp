#include<iostream>
using namespace std;
class A{
	public: 
		areaofrec()
		{
			int a, b;
			
			cout<<"Enter the length of the rectangle : ";
			cin>>a;
			
			cout<<"Enter the width of the rectangle : ";
			cin>>b;
			
			int area = a*b;
			
			cout<<"Area of the rectangle is : "<<area<<endl;
		}
};
main()
{
	cout<<"!!! USING POP CONCEPT !!!"<<endl;
	//using Procedural program for area of rectangle !!!
	double len, width;
	
	cout<<"Enter the length of the rectangle : ";
	cin>>len;
	
	cout<<"Enter the width of the rectangle : ";
	cin>>width;
	int area;
	area = len*width;
	
	cout<<"The area of a rectangle is : "<<area<<endl;
	
	
	cout<<"!!! USING OOPS CONCEPT !!!"<<endlN;
	//creating object for class A !!!
	A obj;
	obj.areaofrec();
}
