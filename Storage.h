
#ifndef STORAGE_H
#define STORAGE_H
#include <vector>
#include <string>
#include<iostream>


struct rawS {
	std::vector<std::string> subChapters;
	std::vector<std::string> raWData;
	std::vector<std::pair<std::string, int>> subNumbers;
};

class Mng {
private:
	std::string linE = "unknown";
	int index = 0;
	std::string subChapter = "unkown";
	rawS storage;
public:
	void addRaw(const std::string& pushIn) {
		storage.raWData.push_back(pushIn);
	/*	for (int i = 0; i < storage.raWData.size(); i++) {
			std::cout << "rawDataTest:  " << storage.raWData[i] << "\n";


		}*/
	}
	Mng() {};
	Mng(const std::string& linE, std::string& subChapter, int& index) : linE(linE), index(index), subChapter(subChapter) {};
	Mng(const std::vector<std::string>& subChapters) {
		storage.subChapters = subChapters;
	}
	 const std::vector<std::string>& getRawS() const {
		return storage.raWData;
	}
	
	void sorted(const std::string& name, int& number) {
		storage.subNumbers.push_back({ name, number });
	}
};


#endif 