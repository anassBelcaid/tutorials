#include <iostream>
#include <map>
using namespace std;

//The laptop is also cool, I'm seriously thinking of bying a new one.
template< class T1,class T2>
ostream & operator<<(ostream & out, const  map<T1,T2> & M)
{
	out<<"map: {";
	for(auto KeyVal: M)
		cout<<"[ "<<KeyVal.first<<", "<<KeyVal.second<<"], ";
	cout<<"}";
	return out;
}


static map<string,string> symmetricDiff(const map<string,string> & one, const map<string,string> & two)
{
	map<string,string> diff;

	//looping over the first one
	for(auto keyval: one)
		//how to test if a key belong to a map
		if(key)

	return diff;
}
int main(int argc, char const *argv[])
{
	cout<<"Algorithme to test the symetric difference"<<endl;

	//"Testing a map"
	map<string,string> angel;
	angel["life"]="hope";
	
	cout<<angel<<endl;
	return 0;
}