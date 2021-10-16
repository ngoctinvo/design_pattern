#include "Custom.h"

class Voucher {
public:
	string voucherName;
	int num;
	int typeID;
	Voucher();
	Voucher(string, int);
	void inputVoucher();
	void outputVoucher();
};
