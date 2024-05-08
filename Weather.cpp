#include "Weather.h"

Weather::Weather(const std::string& city, double lon, double lat, double temperature, const std::string& weather, double windSpeed, int clouds):city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds){}

std::ostream& operator<<(std::ostream& out, Weather const& weather) {
	out << "�����:" << weather.city << "\n";
	out << "�������: " << weather.lon << "\n";
	out << "������: " << weather.lat << "\n";
	out << "�����������: " << weather.temperature << "\n";
	out << "������: " << weather.weather << "\n";
	out << "�������� �����: " << weather.windSpeed << "\n";
	out << "����������: " << weather.clouds << "\n";
	return out;
}
