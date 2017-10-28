#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	
	// the use of auto make it possible to infere the type from the value
	auto a=3.4;

	//using the keyword decltype to infere the type of a
	decltype(a) b;       // now b is a double

	cout<<a<<endl;


	// this is very helpful, let see how simple to iterate over a vectr;
	vector<string> principle={"faith","Joy", "Equilibrum","Hope"};
	for(auto iter=principle.begin();iter!=principle.end();iter++)
		cout<<*iter<<endl;


	//or even simpler using range for
	for(auto iter: principle)
		cout<<iter<<endl;


	//short version using nullptr;
	int *ptr=nullptr;
	return 0;
}