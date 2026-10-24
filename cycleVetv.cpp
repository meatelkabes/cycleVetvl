/******************************************
* Автор:    Карнаухов Фёдор               *
* Название: Циклы с пред и пост условием  *
* Вариант:  7                             *
******************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

	const int container = 15;
	const int pressure = 760;

	double workingVolume, numberOfSwings, residualPressure;

	cout << "working Volume = ";
	cin >> workingVolume;

	cout << "number Of Swings = ";
	cin >> numberOfSwings;

	while (numberOfSwings < 50) {
		residualPressure = pressure * pow((container / (container + workingVolume)), numberOfSwings);
		cout << "residual Pressure = " << residualPressure << endl
		     << "number Of Swings = " << numberOfSwings << endl;
		numberOfSwings += 10;
	} 

	do {
		residualPressure = pressure * pow((container / (container + workingVolume)), numberOfSwings);
		cout << "residual Pressure = " << residualPressure << endl
		     << "number Of Swings = " << numberOfSwings << endl;
		numberOfSwings += 50;
	} while (numberOfSwings < 260);
}

