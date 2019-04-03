// Copyright 2019 Gene Callahan
#ifndef WEATHER_DATE
#define WEATHER_DATE

#include <iostream>
#include <string>

class Date
{
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
 public:
    Date(int m, int d, int y);
    void add_years(int);
    std::string to_string() const;

 private:
    int month;
    int day;
    int year;
};

std::ostream& operator<<(std::ostream& os, const Date& date);

#endif
