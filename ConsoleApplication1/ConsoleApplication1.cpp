#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "введите двухзначное число:";
	cin >> a;
	b = a % 10;
	c = a / 10;
	cout <<"сумма цифр:"<< b + c << endl << "произведение цифр:" << b * c ;
	
}