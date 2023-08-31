/**
 * @file main.cpp
 * @author Matthew Deck
 * @date 2023-08-30
 * @brief GitHub & Linux Basics
 * 
 * Program prompts user for a positive integer, then displays the sum of all positive integers between 1 and the number entered.
 */


#include <iostream>

using namespace std;



/**
 * calculates the sum of all positive integers between int and 1
 *
 * @param int num the starting number
 * @return int the sum of positive integers
 * 
 */
int sumIncremental(int num);


int main() {

  cout << "Enter a positive integer: ";

  int num = 0;
  cin >> num;
  cout << "The sum of positive integers between 1 and " << num << " is " << sumIncremental(num) << "." << endl;
  
  return 0;
}


int sumIncremental(int num) {
  int sum = 0;

  //add num to total, then decrease num by 1
  while(num > 0) sum += num--;
  
  return sum;
}
