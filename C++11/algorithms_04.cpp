/*
 * using algorithms program to count each character
 */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <numeric>
#include <fstream>
/*
* Testing min element with lambda
*/
using namespace std;
int main(int argc, const char *argv[])
{
    using vec=vector<int>;
    using oi=ostream_iterator<int>;
    int ref=3;
    vec V(20);
    iota(begin(V),end(V),0);

    copy(begin(V),end(V),oi{cout,", "});cout<<endl;

    auto it=min_element(begin(V),end(V),[ref](int x,int y){  return abs(x-ref)<abs(y-ref);});
    cout<<"min element= "<<*it<<endl;
    return 1;
}
