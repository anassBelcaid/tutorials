#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/foreach.hpp>
using namespace std;


//A simple class to customize the constructor
class A
{
private:
    double myValue;
public:
    A(const double & myValue):myValue(myValue){
        cout<<"Constructor of A "<<endl;
    }
    ~A()
    {
        cout<<"Destructor called with value :  "<<myValue<<endl;
    }

    int getMyValue()const
    {
        return myValue;
    }
};


void testSharedPtr()
{
    //simple way to use dynamic memory in the heap
    boost::shared_ptr<A> ptr(new A(2.0));
    ptr.reset(new A(3.0));

}


void exercice1()
{
    cout<<"Creating a new vector using shared pointers:"<<endl;

    boost::shared_ptr<vector<int> > Ptr(new vector<int>(100));

    //initialization of the values
    for(int i=0;i<Ptr->size();i++)
        Ptr->at(i)=i;

    //calculating the sum using for each
    long sum=0;
    BOOST_FOREACH(int v,*Ptr) sum+=v;
    cout<<"the sum of the elements is ="<<sum<<endl;
}

int main(int argc, char *argv[])
{
    cout<<"using simple memory allocation"<<endl;
    testSharedPtr();
    exercice1();
}
