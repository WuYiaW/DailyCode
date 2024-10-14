#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> twoSum(vector<int> &numbers, int target)
{
  vector<int> ans;
  int left = 0;
  int right = numbers.size() - 1;

  while (1)
  {
    int sum = numbers.at(left) + numbers.at(right);

    if (sum == target)
    {
      ans.push_back(left);
      ans.push_back(right);
      break;
    }
    else if (sum > target)
      right--;
    else
      left++;
  }

  return ans;
}

int main()
{

  return 0;
}