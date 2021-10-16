#include "HuntingVoucher.h"

int main() {

	//Nhập vào danh sách các voucher khuyến mãi sẽ tung ra
	HuntingVoucherProxy sel;
	Voucher p("freeship", 50);
	Voucher q("discount20", 20);
	Voucher w("discount50", 10);
	sel.pushBackList(p);
	sel.pushBackList(q);
	sel.pushBackList(w);

	//Hiển thị danh sách các voucher hiện có
	sel.outputVoucherList();

	//Trường hợp 1: Khách VIP săn 5 Voucher "discount100" - voucher không tồn tại
	cout << "\n\nEx1: VIP, discount100, 5";
	Custom* c_1 = new Custom(1, "Nguyen Phuoc Vinh");
	Voucher v_1("discount100", 5);
	sel.huntVoucher(v_1, c_1);

	//Trường hợp 2: Khách VIP săn 5 Voucher "discount20" -- voucher tồn tại
	cout << "\n\nEx2: VIP, discount20, 5";
	Custom* c_2 = new Custom(1, "Tran Bao Tin");
	Voucher v_2("discount20", 5);
	sel.huntVoucher(v_2, c_2);

	//Trường hợp 3: Khách Standard săn 15 Voucher "discount50" - không đủ số lượng
	cout << "\n\nEx4: Standard, discount50, 15";
	Custom* c_3 = new Custom(1, "Vo Ngoc Tin");
	Voucher v_3("discount50", 15);
	sel.huntVoucher(v_3, c_3);

	//Trường hợp 4: Khách Standard săn 2 Voucher "discount50" - đủ số lượng
	cout << "\n\nEx4: Standard, discount50, 2";
	Custom* c_4 = new Custom(1, "Vo Ngoc Tin");
	Voucher v_4("discount50", 2);
	sel.huntVoucher(v_4, c_4);

	system("pause");
	return 0;
}