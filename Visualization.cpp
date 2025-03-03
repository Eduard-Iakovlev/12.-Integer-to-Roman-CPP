#include "Visualization.h"
#include "Solution.h"
#include "CheckSolution.h"
#include <iostream>

void Visualization::setExample(int example){
	_example = example;
}

void Visualization::setNum(int num){
	_num = num;
}

void Visualization::setExpected(string expected){
	_expected = expected;
}

void Visualization::setRoman(){
	Solution solution;
	_roman = solution.intToRoman(_num);
}

void Visualization::setVisualizationData(int example, int num, string expected){
	setExample(example);
	setNum(num);
	setExpected(expected);
}

void Visualization::print(){
	cout << "============ Тест " << _example << " ============" << endl;
	cout << " Число: " << _num << endl;
	cout << " Ожидаемый результат: " << _expected << endl;
	setRoman();
	cout << " Полученный результат: " << _roman << endl;
	cout << "============ Проверка ==============" << endl;
	printCheck();
	cout << "====================================\n" << endl;
}

void Visualization::printCheck(){
	CheckSolution checkSolution;
	checkSolution.setCheckData(_expected, _roman);
	if (checkSolution.check()) {
		cout << " Результат: ВЕРНЫЙ" << endl;
	}
	else {
		cout << " Результат: НЕ ВЕРНЫЙ" << endl;
	}
}
