#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        
    double x;
    double d;
    double m;
	double g;
	double k;
	double theta;

	m=0.065;
	k=23;
    g=9.8;
	d=55;
	theta= 45;

    
	x=sqrt((m*g*d)/(k*sin(2*theta)));
    cout<<"the result of your numbers is ";    
    cout<<x<< endl;


}
