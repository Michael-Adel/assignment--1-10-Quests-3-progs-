#include "move.h"
#include<iostream>
using namespace std;

movee::movee()
{
	//default construction function
	x=0;
	y=0;
}

movee::movee(double a , double b)
{
	//construction function
	x=a;
	y=b;
}

void movee::showmove ()
{
	cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
}

double movee::add(double a , double b)
{
	x=x+a;
	y=y+b;
	return x ;
	return y;
}

double movee::reset(double a , double b)
{
	x=a;
	y=b;
	return x ;
	return y;
}
