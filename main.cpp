#include "fibRec.h"

int main() {
  int inp = 0;
  int inpA = 0;
  std::vector<int> fibo = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
  std::vector<int> ansV = {0, 1};
  std::cout << "Fibonacci Sequence Part 1A\n";
  std::cout << "Until what term? Input: ";
  std::cin >> inp;
  while (!valid(inp)) {
    std::cout << "Invalid term, type again: ";
    std::cin >> inp;
  }
  int ans = fibo_helper(0, 1, inp);
  std::cout << "Answer: " << ans << std::endl;

  std::cout << "Fibonacci Sequence Part 2A\n";
  
}