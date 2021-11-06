#include <iostream>
#include <string>
using namespace std;

int main()
{
string firstname;
string second;
string fullname;

cout<<"Enter the firstname: "<<endl;
cin>>firstname;
cout<<"First name:"<<firstname;
cin>>second;
cout<<"Second: "<<second<<endl;
fullname = firstname.append(second);
cout<<"The full name is:"<<fullname;
}
