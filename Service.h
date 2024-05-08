#pragma once
#include "Weather.h"
#include <string>

class Service {
	virtual Weather getWeather(std::string s) = 0;
};