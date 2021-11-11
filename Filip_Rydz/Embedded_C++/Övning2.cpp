#include <iostream>

int main()
{   
  std::cout << "Datorns namn: " << getenv("USER") << std::endl; // USER även LOGNAME
  return 0;
}