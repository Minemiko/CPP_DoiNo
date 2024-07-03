#include <iostream>
using namespace std;

int main() {
	double stn, nam, lai, ls = 0.08;
	cout << "Nhap so tien no: "; cin >> stn;
	cout << "Nhap so nam chua tra no: "; cin >> nam;
	for (int i = 1; i <= nam; i++) {
		lai = stn * ls;
		cout << "Nam " << i << " von " << stn << " lai " << lai << endl;
		stn = stn + lai;
	} return 0;
}