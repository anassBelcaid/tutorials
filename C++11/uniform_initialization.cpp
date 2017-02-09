#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
	A(int x,int y, int z):arr{x,y,z} {};
	void print()
	{
		for(int i=0;i<3;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
private:
	int arr[3];
};

int main(int argc, char const *argv[])
{
	/* here we will initialize using a pointer*/

	int *pt=new int[3]{4,2,4};
	
	//looping over the pointer
	A simple(1,3,2);
	simple.print();


	//Initialization of a vector
	std::vector<int> vec{3,4,-4,8};
	for(auto v: vec )
		cout<<v<<" ";
	cout<<endl;
	return 0;
}