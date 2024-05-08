#pragma once
#include <iostream>
#include <string>

class Weather {
private:
	std::string city = ""; //  Киров
	double lon = 0.0; // 49.6601
	double lat = 0.0; // 58.5966
	double temperature = 0.0; // 5.69
	std::string weather = ""; // дождь
	double windSpeed = 0.0; // 4.27
	int clouds = 0; // 100
	friend std::ostream& operator<<(std::ostream& out, Weather const& weather);
public:
	Weather(const std::string& city, double lon, double lat, double temperature, const std::string& weather, double windSpeed, int clouds);

};