#include "../../std_lib_facilities.h"

long long int slow_fib(int n)
{ // does not compute fib(n) for n >= 48
  if (n <= 2)
    return 1;
  return slow_fib(n - 1) + slow_fib(n - 2);
}

long long int fast_fib(int n)
{
  vector<long long int> fib_list = {1, 1};
  if (n <=2)
    return 1;
  for (int i = 2; i < n; i++) {
    fib_list.push_back(fib_list[i - 2] + fib_list[i - 1]);
  }
  return fib_list[fib_list.size() - 1];
}

int main()
{
  cout << "fib#\tfast\tslow\n";
  for (int i = 1; i < 50; i++) {
    cout << i << '\t' << fast_fib(i) << '\t' << slow_fib(i) << '\n';
  }
}