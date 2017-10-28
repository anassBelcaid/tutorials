#include <iostream>
using namespace std;

//you should class after enum to use strong typed enums
enum  Day {Monday, Thuesday,Wednesday};
enum  Month {January,February,March};

int main(int argc, char const *argv[])
{
	//First introduction of the null pointers
	int *ptr=nullptr;
	cout<<ptr<<endl;


	//enhancement of enums	
	/* sinice enum are just types they will be printed*/
	Day d=Monday;
	Month m=January;
    //if(m==d)
        //cout<<"practically monday equal January!!!!"<<endl;

	return 0;
}
