#include<iostream>
#include<iomanip>
#include<windows.h>


using namespace std;
double temp, c = 0, f = 0, k = 0;
char type;
void F(), C(), K(), ts();
int main() {
	cout << "whats the temp??" << endl;
	cin >> temp;
	cout << "what type??" << endl;
	cin >> type;

	if (type == 'k')
		K();
	if (type == 'f')
		F();
	if (type == 'c')
		C();
	ts();

}//main
void ts() {
	if (f < 32)
		cout << "Brrrrrrr!" << endl;
	if (f > 212)
		cout << "Pant Pant!" << endl;
	else
		cout << "You are a fugitive from the law of averages" << endl;

}
	void F() {
		
	f = temp;


	c = (temp - 32) * 5 / 9;
	k = (temp - 32) * 5 / 9 + 273.15;


	}
