#include<iostream>
using namespace std;

int main()
{
	int choice, operand1, operand2,repeat;
	cout<<"\aMENU\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n"<<endl;
	do
	{
	cin>>choice;
	cout<<"\n";
	switch(choice)
	{
		case 1: cout<<"Enter first operand & second operand"<<endl;
		        cin>>operand1>>operand2;
		        cout<<"Sum is:"<<(operand1+operand2)<<endl;
		        break;    
		case 2: cout<<"Enter first operand & second operand"<<endl;
		        cin>>operand1>>operand2;
		        cout<<"Difference is:"<<(operand1-operand2)<<endl;
		        break;
		case 3: cout<<"Enter first operand & second operand"<<endl;
		        cin>>operand1>>operand2;
		        cout<<"Product is:"<<(operand1*operand2)<<endl;
		        break;
		case 4: cout<<"Enter first operand & second operand"<<endl;
		        cin>>operand1>>operand2;
		        cout<<"Quotient is:"<<(operand1/operand2)<<endl;
		        break;	
		default: cout<<"Invalid choice"<<endl;							   
	}
	cout<<"Do you wish to continue? If yes, then press 1 followed by choice"<<endl;
	cin>>repeat;
    }while(repeat);
}
