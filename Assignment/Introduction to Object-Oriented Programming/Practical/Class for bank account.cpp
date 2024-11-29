#include<iostream>
using namespace std;

class Bank{
	public: 
		string name; 
		int acc_no,balance=5000,de,we, insf;
		
		regi()
		{
			cout<<"Enter Your Name : ";
			cin>>name;
			
			cout<<"Enter Account Number : ";
			cin>>acc_no;
			
			cout<<"Register Balance is : "<<balance<<endl;
			
			cout<<"Thanks For Registration"<<endl;
		}
		
		deposit()
		{
			cout<<"Enter Amout for deposit : ";
			cin>>de;
			
			this ->balance+=de;
			
			cout<<"Amount Depoisted Sucessfully"<<endl;
		}
		
		withdraw()
		{
			cout<<"Enter Amount for Withdrawal : ";
			cin>>we;
			insf = we - balance ;
			this -> balance -= we;
			
			if(this -> balance <= 0)
			{
				cout<<"Insufficient Balance !!!"<<insf<<endl;
			}
			cout<<"Amount Withdrawn Sucessfully"<<endl;			
		}
		
		
		accbalance()
		{
			cout<<"Your Account Balance : "<<this -> balance<<endl;
		}
		
};

main()
{
	Bank obj;
	int ch,ch2;
	cout<<"Press 1 for registeration"<<endl;
	cout<<"Press 2 to Exit!!"<<endl;
	cin>>ch;
	
	if(ch==1)
	{
		obj.regi();
		while(1)
		{
		
		cout<<"Press 1 for Deposit"<<endl;
		cout<<"Press 2 for Withdrawal"<<endl;
		cout<<"Press 3 for Check Balance"<<endl;
		cout<<"Press 4 to Exit"<<endl;
		cin>>ch2;
		
		if(ch2==1)
		{
			obj.deposit();
		}
		else if(ch2==2)
		{
			obj.withdraw();
		}
		else if(ch2==3)
		{
			obj.accbalance();
		
		}
		else if (ch2==4)
		{
			cout<<"Thank You "<<obj.name;
			break;
		}
		}
	}
	else
	{
		cout<<"Thank You!!";
	}
}
