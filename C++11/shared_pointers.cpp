#include <iostream>
using std::cout;
using std::endl;
#include <memory>
using std::shared_ptr;

#include <string>
using std::string;

class Dog
{
	string name;
public:
	Dog(){cout<<"Dog Shepard created"<<endl;}
	Dog(string name):name(name){
		cout<<"Dog "<<name<<" Created"<<endl;
	}
	void bark()
	{
		cout<<"Dog "<<name<<" Bark"<<endl;
	}
};
int main(int argc, char const *argv[])
{
	cout<<"Simple notions on shared pointers"<<endl;
	shared_ptr<Dog> p=shared_ptr<Dog>(new Dog());

	return 0;
}
