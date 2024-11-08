#include <iostream>
#include "Storage.h"
#include "TransitionCenter.h"
#include "Sort.h"
#include "ShowTime.h"



int main() {
	Mng obj;
	std::string path = "K://datas//chapter5//chapter51.txt";
	std::string line;
	std::string sK = "#Chapter";
	std::string eK = "##Subends";
	std::vector<std::string> result;

	iNtrans(path, obj); //works

	const std::vector<std::string>& unsort = obj.getRawS();
	/*for (const auto& str : unsort) {
		std::cout << str << "\n" << "getRaws-main " << std::endl;
	}*/
	result = sorting(unsort, sK, eK);
	showFun(result);

	return 5555;
}

