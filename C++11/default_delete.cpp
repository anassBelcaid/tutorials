#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;
class A
{public:
	A(int a){};             // with this with don't have a default constructor anymore

	A()=default;          // with this we force the compiler to generate the default constructor

	A(const A &)=delete;   // this disable the copy constructor pretty neat ;

};

void print(int v)
{
	cout<<v<<" ";
}

void assign(int &v)
{
	static int n=1;
	v=n++;
}

int main(int argc, char const *argv[])
{
	A inst;

	//this should genereta an error since we can't copy
	//A inst2(inst);

	//using for_each
	vector<int> V(10);
	for_each(V.begin(),V.end(),print);cout<<endl;
	for_each(V.begin(),V.end(),assign);
	for_each(V.begin(),V.end(),print);cout<<endl;


	//now using lambda
	for_each(V.begin(),V.end(),[](int v){cout<<v << " ";});cout<<endl;
	for_each(V.begin(),V.end(),[](int &v){ static int n=4; v=n++;});
	for_each(V.begin(),V.end(),[](int v){cout<<v << " ";});cout<<endl;

	//creating the function and work with it
	auto f= [](int &v){static int n=0; v=n; n+=2;};

	for_each(V.begin(),V.end(),f);
	for_each(V.begin(),V.end(),[](int v){cout<<v << " ";});cout<<endl;


	//Array containg (outstanding)
	array<int,5> integers{1,3,4,-4,3};
	for(int num: integers)
		cout<<num<< " ";
	cout<<endl;

	return 0;
}