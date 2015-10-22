#include<iostream>
#include <string>
using namespace std;

class person

{
private:
	static int const LIMIT =25;
	string lname; 
	string fname; 
public:
	person() ;
	person( string ln , string fn );
	person( string ln );
	void show () ; // firstname lastname format
	void formalshow() ; // lastname , firstname format
};
