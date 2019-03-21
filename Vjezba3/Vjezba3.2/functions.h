#ifndef _functions_H
#define _functions_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

vector<int> loadVector(bool randOrNot, int a, int b, int n);

void print_vector(vector<int> toPrint);

vector<int> createFilteredVector(vector<int> vec1, vector<int> vec2);

#endif // !_functions_H