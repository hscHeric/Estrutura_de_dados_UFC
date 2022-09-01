#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

typedef struct {
	float x;
	float y;
}Ponto;

float DistanciaEntrePontos(Ponto A, Ponto B) {
	return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

int main() {
	Ponto pointA, pointB;

	pointA.x = 0.00;
	pointA.y = 0.00;
	
	cin >> pointB.x >> pointB.y;
	
	cout<< "A distancia é: " << setprecision(2) << fixed << DistanciaEntrePontos(pointA, pointB);

	return 0;
}