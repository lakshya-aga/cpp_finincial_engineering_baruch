#include <iostream>
#include <boost/random.hpp>
#include <string>
#include <map>


int main()
{
    boost::random::mt19937 myRng;
    myRng.seed(static_cast<boost::uint32_t>(std::time(0)));
    boost::random::uniform_int_distribution<int> six(1,6);

    std::map<int, long>statistics;
    int outcome;

    float total = 10000000.0;
    for(int i=0; i<total; i++)
    {
        outcome = six(myRng);
        statistics[outcome]++;
    }
    std::cout<<"Total Trials: "<<total<<std::endl;

    for(int i=1; i<=6; i++)
    std::cout<<i<<": "<<statistics[i]*100.0/total<<std::endl;
    
}