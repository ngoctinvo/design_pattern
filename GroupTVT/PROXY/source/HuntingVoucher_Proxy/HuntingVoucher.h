#include "Voucher.h"

class Shop {
public:
	virtual bool huntVoucher(Voucher, Custom*, int) {
		return false;
	}
};

class HuntingVoucher :public Shop {
	vector<Voucher> listVoucher;
	static int total; // Tổng voucher
	static int indexVoucher; // Dùng để tạo ID cho các loại voucher nhập vào
public:
	//Lấy tổng số voucher hiện có
	int getTotal();
	vector<Voucher> getVoucherList();
	void inputVoucherList();
	void pushBackList(Voucher);
	void outputVoucherList();
	bool huntVoucher(Voucher, Custom*, int = -1);
};



class HuntingVoucherProxy :public Shop {
	HuntingVoucher real;
public:
	//Nhập danh sách voucher từ bàn phím
	void inputVoucherList();

	//Thêm từng voucher vào danh sách
	void pushBackList(Voucher);

	//In danh sách voucher 
	void outputVoucherList();

	//Giao diện săn voucher qua proxy
	bool huntVoucher(Voucher, Custom*, int = -1);
};