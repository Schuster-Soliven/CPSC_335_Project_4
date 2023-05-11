#include <iostream>
#include <vector>
#include <string>
#include <cmath>

static double goldenRatio = 1.61803;

bool valid(int val) { 
  if(val < 0) 
    return false;
  return true;
}

int fibo_helper(int prev, int current, int nth) {
  if (nth == 0) {
    return current;
  } else {
    return fibo_helper(current, current + prev, nth - 1);
  }
  return -1;
}

int golden_ratio() {
  int p = 0;
  std::cout << "Input a positive non-floating point p: ";
  while (!valid(p)) {
    std::cout << "Invalid term, type again: ";
    std::cin >> p;
  }
  double Fp = (pow(1 + sqrt(5), p) - pow(1 - sqrt(5), p)) / pow(2, p) * sqrt(5); 
  return 0;
}
