#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>
using std::ostream;
//naming convention
using veci=std::vector<int>;
using oi=std::ostream_iterator<veci::value_type> ;      //extract the value type from veci (int)

veci create_ps()
{
    veci V(9,1);
    std::partial_sum(V.begin(),V.end(),V.begin());

    return V;
}


void create_table(ostream & out, const veci & base)
{

    for(auto v: base)
    {
        std::transform(base.begin(),base.end(),oi(out,"\t"),[v](auto x){return v*x;});
        out<<"\n";
    }
}

int main(int argc, char * argv[])
{
    create_table(std::cout,create_ps());

    //amazing creating a lambda and storing it into a variable (this is python!!!)

    auto hello=[](){std::cout<<"Deeply in love with ????"<<std::endl;};
    hello();
    auto odd=[](int x)->bool{return x%2;};
    std::cout<<odd(4)<<std::endl;

    //find if with lambda
    auto V=create_ps();
    auto it=std::find_if(V.begin(),V.end(),[](int x){ return x%2==0;});
    std::cout<<"Found "<<((it!=V.end())?*it:0)<<std::endl;

}
