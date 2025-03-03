#pragma once
#include <string>

using namespace std;

class CheckSolution{
public:
	CheckSolution() = default;
	void setExpected(string expected);
	void setRoman(string roman);
	void setCheckData(string expected, string roman);
	bool check();
private:
	string _expected, _roman;
};

