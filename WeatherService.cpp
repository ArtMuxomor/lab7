#include <iostream>
#include <fstream>
#include <Windows.h>
#include "json.hpp"
#include "pugixml-1.14/src/pugixml.hpp"
#include "JsonService.h"
#include "Service.h"
#include "Weather.h"

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	JsonService js;
	Weather w = js.getWeather("weather.json");
	cout << w;
}