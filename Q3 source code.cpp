#include<iostream>
#include "move.h"
using namespace std;
void main()
{
	double j=5 , k=3.5;
	movee b ( j,k);
	b.showmove();
	b.add(3,4);
	b.showmove();
	b.reset(2,9.8);
	b.showmove();
}
