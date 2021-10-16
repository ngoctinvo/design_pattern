#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdio.h>
using namespace std;


class Custom {
protected:
	int typeCustom;
	string nameCustom;
public:
	Custom();
	Custom(int, string);
	virtual int getTypeCustom();
	string getNameCustom();
	void inputCustom();
	void outputCustom();
};

//Khách VIP có type=1
class CustomVIP : public Custom
{
public:
	CustomVIP();
	int getTypeCustom();
};

//Khách Standard có type=0
class CustomStandard : public Custom
{
public:
	CustomStandard();
	int getTypeCustom();
};
