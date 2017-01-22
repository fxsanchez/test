#include <iostream>
#include <cmath>
using namespace std;

bool isPS(int x)
{
	double s =sqrt (x);
	double ipart;
	modf(s,&ipart);
	if (s == ipart)
		return true;
	else
		return false;

}
int main ()
{
	int x;
	int t;
	cin >> t;
	while (t-- > 0)
	{
		cin >> x;
		if (isPS(5*x*x+4) || isPS(5*x*x-4))
			cout << "IsFibo" << endl;
		else
			cout << "IsNotFibo" << endl;
	}


}
