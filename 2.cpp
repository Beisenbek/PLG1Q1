//Задача №2951. Стоимость покупки

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int a,b,n;

	cin >> a >> b >> n;


	int ru = a * n + (b * n)/100;
	int ko = (b * n)%100;

	cout << ru << " " << ko;


	return 0;
}
