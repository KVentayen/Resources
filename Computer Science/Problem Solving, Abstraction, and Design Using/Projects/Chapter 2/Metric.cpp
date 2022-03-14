// File: Metric.cpp
// CONVERTS FABIC MEASURES IN SQURE METERS TO SQUARE YARDS

#include <iostream>

using namespace std;

int main () {
  // Local data ...
  const float meters_to_yards = 1.196; // conversion constant
  float size_in_sqmeters; // input: fabric size in square meters
  float size_in_sqyards; // output: fabric size in square yards

  // Read the fabric size in square meters.
  cout << "Enter the fabric size in square meters: ";
  cin >> size_in_sqmeters;

  // Convert the fabric size to square yards.
  size_in_sqyards = meters_to_yards * size_in_sqmeters;

  // Display fabric size in square yards.
  cout << "The fabric size in square yards is "
       << size_in_sqyards << endl;
  return 0;
}
