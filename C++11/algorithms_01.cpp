/*
 * using algorithms program to write the wc program
 */

#include<iostream>
#include <algorithm>
#include <iterator>
#include <string>
int main(int argc, const char * argv[])
{
    using iter=std::istream_iterator<std::string>;
    auto count=std::distance(iter(std::cin),iter{});
    std::cout<<"number of character is = "<<count<<std::endl;
}
