#include<iostream>
using namespace std;

class A{
	public:
		fun()
		{
			int a[4] , i;
			int sum = 0;
			int avrg = 0;
			for(i=0;i<4;i++)
			{
				cout<<"Enter Numbers : ";
				cin>>a[i];
			}
			for(i=0;i<4;i++)
			{
				sum += a[i];
			} 
			
			avrg = (sum) / 4;
			
			cout<<"Sum of Array is : "<<sum<<endl;
			cout<<"Average of Array is : "<<avrg<<endl; 
		}
};

main()
{
	A obj;
	obj.fun();
	
}
