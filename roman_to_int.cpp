#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
  int romanToInt(string s) {
    int num=0;
    unordered_map<char, int> rti = {{'I', 1},   {'V', 5},   {'X', 10},
                                    {'L', 50},  {'C', 100}, {'D', 500},
                                    {'M', 1000}};

    for (int i = 0; i < s.length(); i++) {
      if (rti[s[i]] < rti[s[i + 1]]) {
        num -= rti[s[i]];
      } else {
        num += rti[s[i]];
      }
    }
    
    return num;
  }
};

int main(int argc, char *argv[]) {
  Solution s;
  s.romanToInt("III");
  return 0;
}
