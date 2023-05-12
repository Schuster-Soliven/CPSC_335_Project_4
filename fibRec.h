#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

bool valid(int val) { 
  if(val < 0) 
    return false;
  return true;
}

int fibo_helper(int prev, int current, int nth) {
  if (nth == 1) {
    return prev;
  }
  else {
    return fibo_helper(current, current + prev, nth - 1);
  }
  return -1;
}

/*********************************************************************8*/
// Approximate value of golden ratio
double PHI = 1.6180339;

double fibonacciNumber(unsigned int n) {
  int Fp = 0;
  return Fp = ((pow(1 + sqrt(5), n) - (pow(1 - sqrt(5), n))) / (pow(2, n) * sqrt(5)));
}

int nthNumber(int n, int p) {
  return fibonacciNumber(n) * pow(PHI, n - p);
}

int nextNumber(int n) {
  return fibonacciNumber( n)* PHI;
}
