#include<iostream>
#include<string.h>
using namespace std;


void game(char a[3][3])
{
	char token='O';
	int pos;
	for(int i=0;i<9;i++)
	{
		if(token=='X')
		token='O';
		else
		token='X';
		    cout<<"Player "<<token<<", enter position! : ";
			cin>>pos;
			if(pos==1)
			a[0][0]=token;
			if(pos==2)
			a[0][1]=token;
			if(pos==3)
			a[0][2]=token;
			if(pos==4)
			a[1][0]=token;
			if(pos==5)
			a[1][1]=token;
			if(pos==6)
			a[1][2]=token;
			if(pos==7)
			a[2][0]=token;
			if(pos==8)
			a[2][1]=token;
			if(pos==9)
			a[2][2]=token;
	}
}

void display(char a[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" | ";
		}
		cout<<"\n";
		cout<<"___________";
		cout<<"\n";
	}
}


bool gamewin(char a[3][3]){
    bool var = true;
    int n1=2;
    for(int i = 0; i < 3; i++){
        int n = 0;
        
        if((a[n][i] == a[n+1][i] && a[n+1][i] == a[n+2][i] && a[n][i] == 'X') || 
           (a[i][n] == a[i][n+1] && a[i][n+1] == a[i][n+2] && a[i][n] == 'X')){
            cout << "\nGame Won by X Player\n" << endl;
            return false;
        }
        
        else  if((a[n][i] == a[n+1][i] && a[n+1][i] == a[n+2][i] && a[n][i] == 'O') || 
           (a[i][n] == a[i][n+1] && a[i][n+1] == a[i][n+2] && a[i][n] == 'O')){
            cout << "\nGame Won by O Player\n" << endl;
            return false;
        }
    }
        
        if ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) ||
        (a[0][2] == a[1][1] && a[1][1] == a[2][0])) {
        cout << "Player " << a[1][1] << " wins!" << endl;
        return false;
    }
    return true;
}

int main()
{
	char a[3][3];
	int choice;
	do
	{
		game(a);
		cout<<"\n";
		display(a);
        bool var_main=gamewin(a);
        if(var_main==true)
        cout<<"Match Drawn"<<endl;
        cout<<"\nDo you wish to play again? Press 1"<<endl;
        cin>>choice;
	}while(choice==1);
    
	return 0;
}
