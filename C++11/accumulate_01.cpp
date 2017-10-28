#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

double sum(std::istream & in)
{
    //function to sum up the entries in a input stream
    using iter=std::istream_iterator<double>;

    return std::accumulate(iter{in},iter{},0.0);
}


int main(int argc, char * argv[])
{
    std::cout<<sum(std::cin)<<std::endl;
}
