#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1056;

/*
Input: 6
Output: true
Explanation:
We get 9 after rotating 6, 9 is a valid number and 9!=6.
*/

tuple<int, bool>
testFixture1()
{
  return make_tuple(6, true);
}

/*
Input: 89
Output: true
Explanation:
We get 68 after rotating 89, 86 is a valid number and 86!=89.
*/

tuple<int, bool>
testFixture2()
{
  return make_tuple(89, true);
}

/*
Input: 11
Output: false
Explanation:
We get 11 after rotating 11, 11 is a valid number but
the value remains the same, thus 11 is not a confusing number.
*/
tuple<int, bool>
testFixture3()
{
  return make_tuple(11, false);
}
/*
Input: 25
Output: false
Explanation:
We get an invalid number after rotating 25.
*/
tuple<int, bool>
testFixture4()
{
  return make_tuple(25, false);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}
void test4()
{
  auto f = testFixture4();
  cout << "Test 4 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}