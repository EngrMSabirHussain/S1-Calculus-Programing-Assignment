/*

2. Write a program that inputs a number a perform multipal task.
and program run again and again until your not enter other than y.

*/



#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float x,result;
	int choice;
runagain:
	cout<<endl<<endl;
	cout<<"Enter any value of x = ";
	cin>>x;
	
	cout<<endl<<endl;
	cout<<"\t Choices"<<endl<<endl;
	cout<<"1. f(x) = 6x^2 + 3(x+1) + 5x + 1"<<endl;
	cout<<"2. x is +ve or -ve"<<endl;
	cout<<"3. x is Even or Odd"<<endl;
	cout<<"4. squre & cube of x"<<endl;
	cout<<"5. squre root & cube root of x"<<endl;
	cout<<"6. Table of x"<<endl;
	cout<<endl<<endl;
	
	cout<<"Enter your Choice = ";
	cin>>choice;
	cout<<endl<<endl<<"******************************"<<endl;
	
	switch(choice)
	{
		case 1:
		{
			cout<<"f(x) = 6x^2 + 3(x+1) + 5x + 1"<<endl;
			result= 6*x*x + 3*(x+1) + 5*x + 1;
			cout<<"f(x) = "<<result<<endl;	
			break;
		}
		case 2:
		{
			if(x>0)
      			cout<<"\t"<<x<<" is +ve"<<endl;
    		else
      			cout<<"\t"<<x<<" is -ve"<<endl;
			break;
		}
		case 3:
		{
			if((int)x%2==0)
      			cout<<"\t"<<x<<" is Even"<<endl;
    		else
      			cout<<"\t"<<x<<" is Odd"<<endl;
			break;
		}
		case 4:
		{
			cout<<"Square of "<<x<<" = "<<x*x<<endl;
      		cout<<"cube of "<<x<<" = "<<x*x*x<<endl;
			break;
		}
		case 5:
		{
			cout<<"Square root of "<<x<<" = "<<sqrt(x)<<endl;
      		cout<<"Cube root of "<<x<<" = "<<cbrt(x)<<endl;
			
			break;
		}
		case 6:
		{
			int c=1;
			 cout<<endl<<"\t Table Of "<<x<<endl;
      		table:
      		{
      			cout<<x<<"*"<<c<<"="<<x*c<<endl;
      			c++;
		  	}
      			if(c<=10)
      			goto table;
			break;
		}
	}
	cout<<"******************************"<<endl;
	char start;
	cout<<"\n\nEnter Y for Again Run Program = ";
	cin>>start;
	if(start=='y'||start=='Y')
	goto runagain;
	getch();
	return 0;
}
