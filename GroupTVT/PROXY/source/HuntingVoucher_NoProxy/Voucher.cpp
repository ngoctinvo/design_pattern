#include "Voucher.h"

Voucher::Voucher() {
	voucherName = "";
	num = 0;
	typeID = -1;
}

Voucher::Voucher(string name, int number) {
	voucherName = name;
	num = number;
	typeID = -1;
}
void Voucher::inputVoucher() {
	cin.ignore();
	cout << "\nEnter voucher's type name: ";
	getline(cin, voucherName);
	cout << "\nEnter voucher's number: ";
	cin >> num;
	typeID = -1;
}

void Voucher::outputVoucher()
{
	cout << setw(5) << left << typeID;
	cout << setw(15) << left << voucherName;
	cout << setw(7) << left << num;
	cout << endl;
}