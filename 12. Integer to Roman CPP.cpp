#include <iostream>
#include <string>
#include "Visualization.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int example = 0;
	int num;
	string expected;

	Visualization visualization;

	example++;
	num = 3749;
	expected = "MMMDCCXLIX";
	visualization.setVisualizationData(example, num, expected);
	visualization.print();

	example++;
	num = 58;
	expected = "LVIII";
	visualization.setVisualizationData(example, num, expected);
	visualization.print();

	example++;
	num = 1994;
	expected = "MCMXCIV";
	visualization.setVisualizationData(example, num, expected);
	visualization.print();

}
