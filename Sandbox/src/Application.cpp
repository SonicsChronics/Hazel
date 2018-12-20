#include<iostream>
namespace Hazel {
	__declspec(dllimport) void Print();
}
int main()
{
	Hazel::Print();
	system("pause");
	return 0;
}