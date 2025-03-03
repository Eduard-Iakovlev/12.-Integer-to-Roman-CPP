#pragma once
#include <string>

using namespace std;

class Visualization{
public:
	Visualization() = default;

	void setExample(int example);
	void setNum(int num);
	void setExpected(string expected);
	void setRoman();
	void setVisualizationData(int example, int num, string expected);

	void print();
	void printCheck();
private:
	int _example, _num;
	string _expected, _roman;
};

