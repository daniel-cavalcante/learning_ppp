#include "../../std_lib_facilities.h"

bool is_prime(int k)
{ // expects positive integer greater than 1
  for (int i = 2; i < k; i++) {
    if (k % i == 0)
      return false;
  }
  return true;
}

void spiral(int k)
{ // prints numbers from 1 to k^2 following a spiral pattern
  // por enquanto não tenho ideia de como fazer isso
}

int main()
{
  return 0;
}