#include <iostream>
using namespace std;

int main()
{
	int arr[2][2] = {{23,45},{34,51}}; // 2- diensional array in c++
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<endl; // accessing each element in array using c++
		}
	}
	
	return 0;
}
