// File: Hello.cpp
// DISPLAYS A USER'S NICKNAME

#include <iostream>
using namespace std;

int main ()
{
  // Local data ...
  char letter1, letter2, letter3;   // input: three letters to display

  // Enter letters and print message.
  cout << "Enter a three letter nickname and press return: ";
  cin >> letter1 >> letter2 >> letter3;
  cout << "Hello " << letter1 << letter2 << letter3 << ". ";
  cout << "We hope you enjoy studying C++!" << endl;
  return 0;
}
