/*
 * using algorithms program to count each character
 */

#include<iostream>
#include <algorithm>
#include <iterator>
#include <string>
using std::string;
#include <unordered_map>

using  tally=std::unordered_map<string,size_t>;

tally collect(std::istream & in)
{
    /** collect caracter from the input stream
     */
    tally chars;        //vector initialization

    //iterator
    using iter=std::istream_iterator<string>;

    std::for_each(iter{in},iter{},[&chars](auto v){chars[v]++;});
    return chars;
}

void printTally( const tally & chars, std::ostream &out)
{
    std::for_each(chars.begin(),chars.end(),[&out](auto v){ out<<v.first<<"=>"<<v.second<<std::endl;});
}

int main(int argc, const char *argv[])
{
    printTally(collect(std::cin),std::cout);
}
