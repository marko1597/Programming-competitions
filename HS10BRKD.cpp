#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
	float a;
	cin >> a;
	float c;
	c=(a/100)*0.48*a;
	c=ceilf(c*10)/10;
	cout.setf(std::ios::fixed);
	cout << setprecision(1) << c << endl;
}
