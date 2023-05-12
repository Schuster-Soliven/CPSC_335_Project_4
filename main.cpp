#include "fibRec.h"
#include "LargestSum.h"

int main() {
  int inp = 0;
  int inpA = 0;
  std::cout << "Part 1A: Fibonacci Sequence\n";
  std::cout << "Until what term? Input: ";
  std::cin >> inp;
  while (!valid(inp)) {
    std::cout << "Invalid term, type again: ";
    std::cin >> inp;
  }
  int ans = fibo_helper(0, 1, inp);
  std::cout << "Answer: " << ans << std::endl;
  /***************************************************************************/
  std::cout << "Part 1B: Golden Ratio Part\n";
  unsigned int inputN = 0, inputP = 0;

  std::cout << "Input a number for the sequence, the number should be a positive whole number " << std::endl;
  // the auto checker shouldn't need to be implemented with the use of a unsigned int as it forces the user to put in a positive int regardless

  std::cin >> inputN;
  int FibNumber = fibonacciNumber(inputN);
  
  std::cout << FibNumber << std::endl;
  std::cout << "Input a number for the previous number in sequence, the number should be a positive whole number " << std::endl;
  
  std::cin >> inputP;

  for (int i = 0; i < 20; i++) {
    std::cout << nextNumber(i) << ", ";
  }

  std::cout << std::endl << std::endl;
  for (int i = 0; i < 20; i++) {
    std::cout << nthNumber(i, i-1) << ", ";
  }
  double division = nthNumber(30, 29) / nthNumber(29, 28);

  std::cout << "The division of fibonacci term 3/2 is: " << division;

  /***************************************************************************/
  std::cout << "\n\nPart 2: The Largest Sum Subarray Problem\n";
  int size = 0;
  std::vector<int> user_vec;
  int values;
  while (size <= 0) {
    std::cout << "Please enter a valid number of integers to input: ";
    std::cin >> size;
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "Please enter an integer: ";
    std::cin >> values;
    user_vec.push_back(values);
  }
  std::vector<int> vec = largest_sum(user_vec);
  std::cout << "Largest Sum Subarray of inputed vector is: [";
  for (int i = 0; i < vec.size(); i++ ) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]";
  std::cout << std::endl;
  /*
  Sample Inputs : Corrsponding Largest Sub Array:
  (10, 2, -5, 1, 9, 0, -4, 2, -2)                  : [10, 2, -5, 1, 9]
  (-7, 1, 8, 2, -3, 1)                             : [1, 8, 2]
  (9, 7, 2, 16, -22, 11)                           : [9, 7, 2, 16] 
  (6, 1, 9, -33, 7, 2, 9, 1, -3, 8, -2, 9, 12, -4) : [7, 2, 9, 1, -3, 8, -2, 9, 12]
  */
  }