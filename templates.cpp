#include <iostream>
using namespace std;

template <typename T> //template initialization in c++
T myMax(T x, T y)
{
	return (x > y) ? x : y; // shorthand if else 
}
int main()
{
	cout<< myMax<int>(2,1)<<endl;
	cout<< myMax<float>(2.3,4.5)<<endl;
	cout<< myMax<char>('g','e')<<endl;
	
	return 0;
}
