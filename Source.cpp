#include<iostream>
#include<functional>

using namespace std;

class prisoner
{
public:
	prisoner(function <int(int, int)> func)
	{
		choice = func;
	};
	~prisoner();
	function<int(int, int)> choice;
	int	score;
private:

};

int titfortat(int me, int you)
{
	return you;
}


int main()
{
	int p1 = 0;
	int p2 = 0;
	int oldp1 = 0;
	int oldp2 = 0;

	for (int i = 0; i < 10; i++)
	{



	}
		
		

	return 0;
}
