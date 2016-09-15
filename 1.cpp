//Задача №2947. Электронные часы - 1

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n;

	cin >> n;

	int h = (n / 60) %24;
	int m = (n % 60);

	cout << h << " " << m;

	return 0;
}
