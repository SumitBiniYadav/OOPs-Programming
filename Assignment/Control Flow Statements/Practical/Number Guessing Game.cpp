#include<iostream>
using namespace std;

class A{
	public:
		myfun1()
		{
		int secNo = 42;
		int userGuess;
	
	
		cout<<"Welcome to the Guess the Number Game!"<<endl;
		cout<<"Guess a Number between 1 and 100: ";
	
			while(1){
		
				cin>>userGuess;
		
				if(secNo > userGuess )
				{
				cout<<"Your Guess is too high! Try Again: ";
				}
		
				else if(secNo < userGuess)
				{
				cout<<"Your Guess is too low! Try Again: ";
				}
				else
				{
				cout<<"Congratulations! You guessed it right!"<<secNo<<endl;
				break;
				}
			}
		}
};

main()
{
	A obj;
	obj.myfun1();
}
