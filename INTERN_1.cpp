#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int num=100;
	int generate,guess;
	do
	{
	cout<<"Guess the number!"<<endl;
	cin>>guess;
	generate=rand()%num;
	if(guess<generate)
	{
		cout<<"Guess-"<<guess<<"\tRandom generated-"<<generate<<endl;
		cout<<"TOO LOW - not matched\n"<<endl;
	}
	else if(guess>generate)
	{
		cout<<"Guess-"<<guess<<"\tRandom generated-"<<generate<<endl;
		cout<<"TOO HIGH - not matched\n"<<endl;
	}
	else
	{
		cout<<"Guess-"<<guess<<"\tRandom generated-"<<generate<<endl;
		cout<<"Matched!!"<<endl;
		break;
	}
    }while(guess!=generate);
	return 0;
}
