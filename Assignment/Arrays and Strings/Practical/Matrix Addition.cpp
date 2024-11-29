#include<iostream>
using namespace std;

class A{
	public:
		multiDemArray()
		{
			int a[2][2] , b[2][2] , sum[2][2] ; 
			int i , j;
			
			//input of first matrix
			cout<<"Enter elements of first 2x2 matrix : "<<endl;
			for(i= 0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<"Enter Element ["<<i+1<<"]["<<j+1<<"]: " ;
					cin>>a[i][j];
				}
			}
			
			//input of secound matrix
			cout<<"Enter elements of second 2x2 matrix:" << endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<"Enter Element ["<<i+1<<"]["<<j+1<<"]: " ;
					cin>>b[i][j];
				}
			}
			
			//addition matrix
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					sum[i][j] = a[i][j] + b[i][j];
				}
			}
			
			//output of result of addition of two matrix
			cout<<"Sum of the two matrix is : "<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<< sum[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};

main()
{
	A obj;
	obj.multiDemArray();
}
