#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class MyNumber
{
public: 
	MyNumber(const std::initializer_list<int>  &v)
	{
		cout<<"Constructing using a list"<<endl;
		for(auto itm:v)
			myVec.push_back(itm);
	}

	void print()
	{
		for(auto itm: myVec)
			cout<<itm<<" ";
		cout<<endl;
	}

private:
	vector<int> myVec;
};
int main(int argc, char const *argv[])
{
	MyNumber C={1,3,3,4,9};
	C.print();
	return 0;
}
