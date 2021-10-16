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

//Kh�ch VIP c� type=1
class CustomVIP : public Custom
{
public:
	CustomVIP();
	int getTypeCustom();
};

//Kh�ch Standard c� type=0
class CustomStandard : public Custom
{
public:
	CustomStandard();
	int getTypeCustom();
};
