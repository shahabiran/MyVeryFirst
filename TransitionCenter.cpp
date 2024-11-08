#include <fstream>
#include <filesystem>
#include <string>
#include "Storage.h"




std::ofstream outPutData;

void iNtrans(const std::string& path, Mng& storage) {

	std::ifstream inPutData(path);
	if (!inPutData.is_open()) {
		std::cerr << "File didnt open" << std::endl;
		return;
	}
	std::string line = "unknown";
	while (getline(inPutData, line)) {

		storage.addRaw(line);
	}
	inPutData.close();
}


