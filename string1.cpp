#include <iostream>
#include <string>
using namespace std;

int main()
{
	string txt = "ABCDEFGHIJ  KLMNOPQRSTUVWX   YZ";
	int result = txt.length();
	cout<<"The length of the string is: "<<result<<endl;
	
	string name = "Akshat Kumar ";
	string last = "Mishra";
	string fullname = name.append(last);
	cout<<"The full name is: "<<fullname<<endl;
	
	cout<<"The first character of the string is: "<<txt[0];
	fullname[5] = "y";
	cout<<"The new full name is :"<<fullname<<endl;
}
