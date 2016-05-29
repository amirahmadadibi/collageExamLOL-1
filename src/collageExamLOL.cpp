#include <iostream>
using namespace std;

//CODE
void code1()
{

}

void code2()
{

}
//END CODE

void clear(){
	for(int i = 0; i <= 250;i++)
		cout << endl;
}

int main() {
	int inpt;
	cout << endl << "enter a command number to run the code :";
	cin >> inpt;
	clear();
	while(inpt != 7)
	{
		switch(inpt)
		{
		case 1:
			clear();
			code1();
			break;
		case 2:
			clear();
			code2();
		default:
			clear();
			cout << "wrong command!"<<endl;
			break;
		}
		cout << endl << "enter a command number to run the code :";
		cin >> inpt;
	}
	return 0;
}
