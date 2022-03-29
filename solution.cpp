#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm>
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>
using namespace sol1056;
using namespace std;

/*takeaways
  - use a hash map to store the valid rotations of a digit
  - construct the new number backwards from the original number
    - pick up the rotated digit from the hash map
*/

bool Solution::isValid(int N)
{
  /* digits that can be rotated */
  auto r = unordered_map<int, int>{{0, 0}, {1, 1}, {6, 9}, {8, 8}, {9, 6}};
  auto before = N, after = 0;

  while (N > 0)
  {
    /* return false if any of the digit can't be rotated */
    if (!r.count(N % 10))
      return false;

    /* construct the number backwards */
    after = after * 10 + r[N % 10];
    N /= 10;
  }

  return before != after;
}