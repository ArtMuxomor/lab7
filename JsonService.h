#pragma once
#include "Service.h"
#include "json.hpp"
#include <fstream>
#include <iostream>

using nlohmann::json;

class JsonService : public Service {
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};