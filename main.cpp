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


  /***************************************************************************/
  std::cout << "Part 2: The Largest Sum Subarray Problem\n";
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



/*


#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

// Approximate value of golden ratio
double PHI = 1.6180339;


double fibonacciNumber(unsigned int n)
{
    int Fp = 0;
    return Fp = ((pow(1 + sqrt(5),n) - (pow(1 - sqrt(5), n))) / (pow(2,n) * sqrt(5)));
}


int nthNumber(int n, int p)
{
    return fibonacciNumber(n) * pow(PHI, n - p);
}

int nextNumber(int n)
{

  return  fibonacciNumber( n)* PHI;
}

// driver code
int main()
{
    unsigned int inputN = 0, inputP = 0;

    cout << "Input a number for the sequence, the number should be a positive whole number " << endl;
    // the auto checker shouldn't need to be implemented with the use of a unsigned int as it forces the user to put in a positive int regardless

    cin >> inputN;


    int FibNumber = fibonacciNumber(inputN);
    cout << FibNumber << endl;
    cout << "Input a number for the previous number in sequence, the number should be a positive whole number " << endl;


    cin >> inputP;

    for (int i = 0; i < 20; i++)
    {

        cout << nextNumber(i) << ", ";

    }

    cout << endl << endl;
    for (int i = 0; i < 20; i++)
    {

        cout << nthNumber(i, i) << ", ";

    }








    return 0;
}



*/
