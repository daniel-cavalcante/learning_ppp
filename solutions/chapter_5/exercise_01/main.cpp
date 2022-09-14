#include "../../../std_lib_facilities.h"

// int area(int width, int height)
// {
//   return width * height;
// }

class Bad_area {
};

int area(int width, int height)
{
  if (width <= 0 || height <= 0)
    throw Bad_area{};
  return width * height;
}

int framed_area(int x, int y)
{ // calculate area within frame
  return area(x - 2, y - 2);
}

void try_this_page_139()
{
  // int s1 = area(7; // error: ) missing
  // int s2 = area(7) // error: ; missing
  // Int s3 = area(7);// error: Int is not a type
  // int s4 = area('7) ;
}

void try_this_page_146(int x, int y, int z)
{ // errors in comments
  int area1 = area(x,y); // x and y can both be negative
  if (area1<=0) error("non-positive area");
  int area2 = framed_area(1,z); // area2 can be <= 0
  int area3 = framed_area(y,z); // area3 can be any integer
  double ratio = double(area1)/area3; // dividing by zero
}

void error(string s1, string s2)
{
  throw runtime_error(s1+s2);
}

int try_this_page_153()
try { // instructions not clear to me. go back and read this section.
  int n;
  cin >> n;
  cout << n / 2;
  return 0;
}
catch (out_of_range) {
  cerr << "Oops! Range error\n";
  return 1;
}

int main() {
  try_this_page_153();
}
// try {
//   int x = -1;
//   int y = 2;
//   int z = 4;
//   // . . .
//   int area1 = area(x,y);
//   int area2 = framed_area(1,z);
//   int area3 = framed_area(y,z);
//   double ratio = area1/area3;
// }
// catch (Bad_area) {
//   cout << "Oops! bad arguments to area()\n";
// }
// try {
//   throw runtime_error("vixe...");
// } catch (runtime_error& e) {
//   cerr << "runtime error: " << e.what() << '\n';
//   keep_window_open();
//   return 1; // 1 indicates failure
// }
// try {
//   vector<int> v = {0};
//   cout << v[1];
// }
// catch (exception& e) {
//   cerr << "error: " << e.what() << '\n';
//   keep_window_open();
//   return 1; // 1 indicates failure
// }
// catch (...) {
// cerr << "Oops: unknown exception!\n";
// keep_window_open();
// return 2; // 2 indicates failure
// }