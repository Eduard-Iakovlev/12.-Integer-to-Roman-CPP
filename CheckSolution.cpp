#include "CheckSolution.h"

void CheckSolution::setExpected(string expected) {
	_expected = expected;
}

void CheckSolution::setRoman(string roman) {
	_roman = roman;
}

void CheckSolution::setCheckData(string expected, string roman) {
	setExpected(expected);
	setRoman(roman);
}

bool CheckSolution::check() {
	return _expected == _roman;
}
