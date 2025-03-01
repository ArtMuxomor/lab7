#include "JsonService.h"

Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin)
        throw std::exception("error");

    json j;
    j = json::parse(fin);
    std::string city = j["name"]; //  �����
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lon"]; // 58.5966  
    double temperature = j["main"]["temp"]; // 5.69

    std::vector<nlohmann::json> weatherData = j["weather"].get<std::vector<nlohmann::json>>();

    std::string weather = weatherData.at(0)["description"]; // �����
    double windSpeed = j["wind"]["speed"]; // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}