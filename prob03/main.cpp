// Name: Steven Tsan
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main()

{
  double meal, tax, tip;
  int total;
std::cout << "```\n";
std::cout << "Welcome to the Restaurant Bill Calculator.\n";
  // Get the meal total.
  std::cout << "What is the total meal cost?\n";
  std::cin >> meal ;

// Calculate for Tax and Tip, then add them to Meal for Bill.
tax = meal * .0775;
tip = meal * .2;
total = meal + tax + tip;
// Display total.

std::cout << "Meal cost:" << meal << "$\n";
std::cout << "Tax:" << tax << "$\n";
std::cout << "Tip:" << tip << "$\n";
std::cout << "Total Bill:" << total << "$\n";
std::cout << "```";

  return 0;
}
