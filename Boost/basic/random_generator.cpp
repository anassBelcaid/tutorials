#include <iostream>
#include <boost/math/distributions.hpp>
#include <boost/random.hpp>


using namespace std;

void simulate_Dice(int tries=10)
{
    unsigned int seed=12441;

    //creating the number generator
    boost::mt19937 rng(seed);

    //choosing the distribution;
    boost::uniform_int<> dice(1,6);  //cool

    //connecting the number generator and the disribution
    boost::variate_generator<boost::mt19937&,boost::uniform_int<> > Dice(rng,dice);

    for(int i=0;i<tries;i++)
    {
        cout<<"value of the dice is: "<<Dice()<<endl;
    }
}

void simulate_gaussian()
{
    unsigned int seed=4;
    boost::mt19937 rng(seed);

    boost::normal_distribution<> d(0,1);

    boost::variate_generator<boost::mt19937&,boost::normal_distribution<> > gaussian(rng,d);

    for(int i=0;i<20;i++)
        cout<<gaussian()<<endl;
}


void exercice2()
{
    unsigned int seed=143;

    boost::mt19937 rng(seed);

    boost::uniform_real<> d(0,1);

    boost::variate_generator<boost::mt19937 &, boost::uniform_real<> > uniform(rng,d);
    for(int i=0;i<10;i++)
    {
        cout<<uniform()<<endl;
    }
}

int main(int argc, char * argv[])
{
    cout<<"The steps for generating random number is really fancy in boost"<<endl;
    cout<<" Set the seed for reproducibility"<<endl;
    cout<<" Choose the random number generator like the Mersenne_Twister"<<endl;
    cout<<" Choose the distribution for the random number"<<endl;
    cout<<" The cool thing here is to connect the generator and the distribution"<<endl;
    cout<<"Let's not forget why we are here, generate numbers"<<endl;

    //simulate_Dice(20);

    simulate_gaussian();

    //exercice 2
    exercice2();
}
