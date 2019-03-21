#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include "functions.h"

using namespace std;


int main() {

	vector<int> vec1 = loadVector(true, 5, 50, 10);

	sort(vec1.begin(), vec1.end());

	print_vector(vec1);

	srand(time(NULL));

	vector<int> vec2 = loadVector(true, 5, 50, 10);

	sort(vec2.begin(), vec2.end());

	print_vector(vec2);

	vector<int> vec3 = createFilteredVector(vec1, vec2);

	print_vector(vec3);

}