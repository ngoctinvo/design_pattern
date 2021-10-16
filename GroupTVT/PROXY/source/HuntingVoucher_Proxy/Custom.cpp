#include "Custom.h"

Custom::Custom() {
	nameCustom = "";
}

Custom::Custom(int id, string name) {
	typeCustom = id;
	nameCustom = name;
}

int Custom::getTypeCustom() {
	return typeCustom;
}

string Custom::getNameCustom() {
	return nameCustom;
}

void Custom::inputCustom() {
	cin.ignore();
	cout << "\nEnter custom's name: ";
	getline(cin, nameCustom);
}

void Custom::outputCustom() {
	cout << "\nCustom's name: " << nameCustom;
}

CustomVIP::CustomVIP() {
	typeCustom = 1;
}

int CustomVIP::getTypeCustom() {
	return typeCustom;
}

CustomStandard::CustomStandard() {
	typeCustom = 0;
}

int CustomStandard::getTypeCustom() {
	return typeCustom;
}
