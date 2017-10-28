#include <iostream>
#include <assert.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* This is a cool freature wich offer the possibility to test in compile time!!!*/

	int a;


	int *ptr=&a;

	//simple assert
	assert(ptr==&a);
	cout<<"passed the assertion"<<endl;

	static_assert(3==3," pionter is not equal to a");
	return 0;

	//other cool stuf are also known as constructor delegation
	// which means consructors could call others constructors
	// we could also use override to be sure that our method override a function
	// and the simple use of final to prevent overriding and overloading
}