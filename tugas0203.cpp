#include <iostream>
using namespace std;

int main(){
	double ton=35273.92;
	
	double berat;
	cin >> berat;
	
	double ounce = 1/ton;
	double beratton = berat*ounce;
	
	cout << beratton<<endl;
	
	double jumlah=1/beratton;
	cout << jumlah;
}
