
#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "CaLcUlaToR" << endl << endl;
	cout << "DO MATHS." 
		<< endl;

	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0)
		{
			cout << "Huh? you're wrong!" << endl;
			continue;
		}
		else
		{

			result = c.Calculate(x, oper, y);
		}
		cout << "Result " << " of " << x << oper << y << " is: " << result << endl;
	}

	return 0;
}


