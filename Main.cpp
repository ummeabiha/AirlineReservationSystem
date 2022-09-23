#include<iostream>
using namespace std;

class UserData
{
private:
	string name;
public:
	UserData(string n = "")
	{
		name = n;
	}

	void Display()
	{
		cout << name << endl;
	}

};

int main()
{
	return 0;
}