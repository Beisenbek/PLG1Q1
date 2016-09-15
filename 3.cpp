//Задача №112170. Точка - 6

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double x,y;

	cin >> x >> y;

	bool ok = true;

	if(x * x + y * y > 1) ok = false;
	else if(y < -x && y > x) ok = false;

	if(ok) cout << "YES";
	else cout << "NO";

	return 0;
}
