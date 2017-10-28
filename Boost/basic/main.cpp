#include <iostream>
#include <boost/regex.hpp>

int main(){
  boost::regex  begin_with_capital("[A-Z].*");
  std::cout << boost::regex_match("MacBook Pro", begin_with_capital) << std::endl;
  std::cout << boost::regex_match("iPad Air", begin_with_capital) << std::endl;
}
