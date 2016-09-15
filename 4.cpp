//Задача №112170. Точка - 6

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int a;

	cin >> a;

	bool ok = true;

	//123
	int d = a%10;
	a = a / 10;

	if(a > 0){
	
		//12
		d = a%10;
		a = a / 10;

		if(a > 0){

			//1
			d = a % 10;
			a = a / 10;			

			if(a != 0){
				ok = false;
			} 

		}else{
			ok = false;
		}

	}else{
		ok = false;
	}

	if(ok) cout << "YES";
	else cout << "NO";

	return 0;
}
