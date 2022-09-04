#include "../../../std_lib_facilities.h"

bool is_prime(int k)
// expects positive integer greater than 1
{
  for (int i = 2; i < k; i++) {
    if (k % i == 0)
      return false;
  }
  return true;
}

void print_primes(int k)
{
  vector<int> primes = {};

  // list primes
  for (int i = 2; i < k; i++) {
    if (is_prime(i))
      primes.push_back(i);
  }

  // print them
  for (int i = 0; i < primes.size(); i++)
    cout << primes[i] << "\n";
}

vector<int> list_numbers(int k)
// make a vector<int> with integers from 0 to k
{
  vector<int> v = {};
  for (int i = 0; i <=k ; i++) {
    v.push_back(i);
  }
  return v;
}

vector<int> sieve(int k)
// v is expected to be a list of sequential integers starting from zero; v = {0,1,2,3,...,v.size()-1}
{
  vector<int> v = list_numbers(k);
  for (int i = 2; i < sqrt(k); i++) { // start from first prime
    if (v[i] != 0) {                  // if it is not zero, then it is prime
      int j = 2;                      // turn all other multiples into zeroes
      while(i*j <= k) {
        v[i*j] = 0;
        j++;
      }
    }
  }

  vector<int> primes = {};              
  for (int i = 2; i < v.size(); i++) { // put all non-zero elements of v into a list of primes
    if (v[i] != 0)
      primes.push_back(v[i]);
  }
  return primes;
}

void print_vector(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
    if (v[i] != 0)
      cout << v[i] << ' ';
}

int main()
{
  int k = 0;
  cin >> k;
  print_vector(sieve(k));
}