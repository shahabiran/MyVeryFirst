


#include "Sort.h"







	
std::vector<std::string> sorting(const std::vector<std::string>& data, const std::string& startKeyword, const std::string& endKeyword) {
	bool storing = false;
	std::vector<std::string> result;
	for (const auto& str : data) {
		if (str == startKeyword) {
			storing = true;
		}
		if (storing) {
			result.push_back(str);
		}
		if (str == endKeyword) {
			storing = false;
			break;

		}
	}


	return result;
}	

