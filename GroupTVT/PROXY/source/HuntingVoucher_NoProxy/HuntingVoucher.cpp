#include "HuntingVoucher.h"

int HuntingVoucher::getTotal() {
	return total;
}

vector<Voucher> HuntingVoucher::getVoucherList() {
	return listVoucher;
}

void HuntingVoucher::inputVoucherList()
{
	Voucher p;
	int check = 1;
	while (check == 1)
	{
		p.inputVoucher();
		p.typeID = indexVoucher++;
		listVoucher.push_back(p);
		cout << "\n-----Continue import Voucher: type 1 // Stop: type 0 ------ ";
		cin >> check;
		if (check == 0)
			break;
	}
	total = indexVoucher;
}

void HuntingVoucher::pushBackList(Voucher p) {
	p.typeID = indexVoucher++;
	total++;
	listVoucher.push_back(p);
}

void HuntingVoucher::outputVoucherList()
{
	cout << endl;
	cout << setw(5) << left << "ID";
	cout << setw(15) << left << "TypeName";
	cout << setw(7) << left << "Number";
	cout << endl;
	for (int i = 0; i < indexVoucher; i++)
	{
		Voucher p = listVoucher.at(i);
		p.outputVoucher();
	}
}

bool HuntingVoucher::huntVoucher(Voucher vou, Custom* cus, int id) {
	for (int i = 0; i < getTotal(); i++) {
		if (vou.voucherName == getVoucherList().at(i).voucherName)
			id = i;
	}

	//Voucher không tồn tại -> false
	if ((id == -1)
		//Voucher không còn đủ số lượng -> false
		|| (getVoucherList().at(id).num < vou.num)

		//Khách hàng thường lấy trên 3 voucher -> false
		|| (cus->getTypeCustom() != 1 && vou.num > 3)) {

		cout << "\nOops sorry, Hunting Voucher failed! Please check again!";
		return false;
	}
	//Trừ số lượng voucher đã săn trong danh sách khuyến mãi
	listVoucher.at(id).num -= vou.num;
	cout << "\nCongratulation, Hungting Voucher successfully! Enjoy it now! ";
	return true;
}

int HuntingVoucher::indexVoucher = 0;
int HuntingVoucher::total = 0;
