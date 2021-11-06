#include <iostream>
using namespace std;

int main()
{
	int a[3][3][3] = {
	
	{{12,32,43},{45,67,99},{11,23,87}},
	{{22,11,76},{32,13,15},{17,19,21}},
	{{56,43,29},{55,77,99},{92,13,51}}
	};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				cout<<"Element present at index: "<<"a["<<i<<"]"<<"["<<j<<"]"
				<<"["<<k<<"]"<<endl;
			}
		}
	}
	return 0;
}
