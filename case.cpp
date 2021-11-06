#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	switch(x){
		case 1:
			int a = 100;
			cout<<"Option 1";
			break;
		case 2:
			int b = 200;
			cout<<"Option 2";
			break;
		case 3:
			int c = 300;
			cout<<"Option 3";
			break;
		case 4:
			int d = 400;
			cout<<"Option 4";
			break;
		default:
			cout<<"Option 5";
			break;
	}
}
