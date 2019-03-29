#include<iostream>
using namespace std;
void evenOROdd(int &n)
{
	if (n % 2 == 0)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd"<<endl;
	}
}
int main()
{
	int num;
	cout << "Enter Number : ";
	cin >> num;
	evenOROdd(num);
}