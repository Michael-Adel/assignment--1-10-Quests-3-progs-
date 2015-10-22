#include<iostream>
using namespace std;

class movee
{
private:
	double x;
	double y;
public:
	movee (double a=0 , double b=0);
	movee();
	void showmove();
	double add(double a , double b);
	double reset(double a , double b);
};

