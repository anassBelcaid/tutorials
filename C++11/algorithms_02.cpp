/*
 * using algorithms program to count each character
 */

#include<iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

using  tally=std::vector<size_t>;

tally collect(std::istream & in)
{
    /** collect caracter from the input stream
     */
    tally chars(256,0);        //vector initialization

    //iterator
    using iter=std::istream_iterator<char>;

    std::for_each(iter{in},iter{},[&chars](auto v){ ++chars.at(v);});
    return chars;
}

void printTally( const tally & chars, std::ostream &out)
{
    for(int i=0;i<256;i++)
    {
        if(chars[i])
            out<<(char)i<<"= "<<chars[i]<<" ";
    }
}

int main(int argc, const char *argv[])
{
    printTally(collect(std::cin),std::cout);
}
