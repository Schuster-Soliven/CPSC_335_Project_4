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

int fibo_helper(int prev, int current, int nth)//worst case O(7)
{
  if (nth == 1) //1{
    return prev;//1
  }
  else {
    return fibo_helper(current, current + prev, nth - 1);
  }
  return -1;
}

/*********************************************************************8*/
// Approximate value of golden ratio
double PHI = 1.6180339;//1

double fibonacciNumber(unsigned int n)//worst O(5) {
  int Fp = 0;//1
  return Fp = ((pow(1 + sqrt(5), n) - (pow(1 - sqrt(5), n))) / (pow(2, n) * sqrt(5)));//4
}

int nthNumber(int n, int p)//worst case O(6) {
  return fibonacciNumber(n) * pow(PHI, n - p);
}

int nextNumber(int n) //worst case O(6){
  return fibonacciNumber( n)* PHI;
}
