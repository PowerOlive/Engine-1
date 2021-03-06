#pragma once

#include <json/json.h>
#include <string>

namespace MUtilities::Utility {
	Json::Value stojson(std::string str);
	bool hasSuffix(const std::string &str, const std::string &suffix);
}
