#include <iostream>
#include <Windows.h>
#include "XmlService.h"
#include "json.hpp"
#include "pugixml-1.14/src/pugixml.hpp"

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	cout << w;
}