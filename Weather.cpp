#include "Weather.h"

Weather::Weather(const std::string& city, double lon, double lat, double temperature, const std::string& weather, double windSpeed, int clouds):city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds){}

std::ostream& operator<<(std::ostream& out, Weather const& weather) {
	out << "Город:" << weather.city << "\n";
	out << "Долгота: " << weather.lon << "\n";
	out << "Широта: " << weather.lat << "\n";
	out << "Температура: " << weather.temperature << "\n";
	out << "Погода: " << weather.weather << "\n";
	out << "Скорость ветра: " << weather.windSpeed << "\n";
	out << "Облачность: " << weather.clouds << "\n";
	return out;
}
