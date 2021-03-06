// Copyright 2019 Gene Callahan

#include <iostream>
#include <iomanip>

#include "./reading.h"

using namespace std;


Reading::Reading(Date dt, double temp, double hum,
        double ws, Reading* p)
    : date{dt}, temperature{temp}, humidity{hum},
      windspeed{ws}, prev{p} {
  /*
   * Constructor for reading that just does inits.
   * */
}

void Reading::set_tempF(double t) { temperature = t; }
double Reading::get_tempF() const { return temperature; }

double Reading::get_tempC() const
{
    return (temperature - 32) * C_TO_F_RATIO;
}

double Reading::get_temp_changeF() const {
    if (prev == nullptr) return 0.0;
    else
        return get_tempF() - prev->get_tempF();
}

double Reading::get_hum() const { return humidity; }
double Reading::get_ws() const { return windspeed; }
Image& Reading::get_image() { return *image; }
void Reading::set_image(Image* img) { image = img; }

ostream& operator<<(ostream& os, const Reading& r) {
    /*
     * Our "friendly" << operator for Reading.
     * */
    os << fixed << setprecision(2)
        << "Weather reading: "
        << r.date
        << "; Temp: " << r.get_tempF() << "F "
        << " (change = " << r.get_temp_changeF() << "); "
        << r.get_tempC() << "C"
        << " Hum: " << r.get_hum()
        << " Wind: " << r.get_ws();
    return os;
}
