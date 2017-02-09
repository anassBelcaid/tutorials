#include <iostream>
#include <vector>
#include <boost/current_function.hpp>
#include <boost/static_assert.hpp>
#include <boost/foreach.hpp>
#include <boost/detail/lightweight_test.hpp>

using namespace std;
const int global=130;


void testMacroa(int a)
{
    cout<<"You are in the function : "<<BOOST_CURRENT_FUNCTION<<endl;
}


void testMacrob()
{
    BOOST_STATIC_ASSERT(global!=140);
}


void testMacroC()
{
    cout<<"The cool macro for each but already implemented in c11"<<endl;
    vector<int> V(10);

    BOOST_FOREACH(int &x, V) x=10;

    BOOST_FOREACH(int x, V) cout<<x <<" ";
    cout<<endl;

}

void testMacroD()
{
    int x=0;
    BOOST_TEST(x==0);
    BOOST_ERROR("Failure of this function");
}

int main(int argc, char * argv[])
{
    //Calling the function
    testMacroa(3);


    //This wont compile unless global is different from 140
    testMacrob();


    //macro C which uses the for each loop
    testMacroC();

    //macro which illustrate the use of BOOST_Failure and BOOST_Test
    testMacroD();
}


