// Author:  Tim Holden
// Project: Physics
// File:    coordinates.cpp
// Date:    20221006

#include <cmath>
#include "coordinates.hpp"

// Coordinate class constructors

Coordinates::Coordinates()
{
    x = 0;
    y = 0;
    z = 0;
}

Coordinates::Coordinates(double X, double Y)
{
    double x = X;
    double y = Y;
}

Coordinates::Coordinates(double X, double Y, double Z)
{
    double x = X;
    double y = Y;
    double z = Z;
}

// Coordinate class accessors
void Coordinates::set_x(double X)
{
    double x = X;
}

void Coordinates::set_y(double Y)
{
    double y = Y;
}

void Coordinates::set_z(double Z)
{
    double z = Z;
}

void Coordinates::set_r(double R)
{
    double r = R;
}

void Coordinates::set_rho(double R)
{
    double rho = R;
}

void Coordinates::set_theta(double T)
{
    double theta = T;
}

void Coordinates::set_phi(double P)
{
    double phi = P;
}

double Coordinates::get_x() const { return x; }

double Coordinates::get_y() const { return y; }

double Coordinates::get_z() const { return z; }

double Coordinates::get_r() const { return r; }

double Coordinates::get_rho() const { return rho; }

double Coordinates::get_theta() const { return theta; }

double Coordinates::get_phi() const { return phi; }

double Coordinates::calc_mag(double X, double Y)
{
    mag = sqrt( pow(X, 2) + pow(Y, 2) );
    return mag;
}

double Coordinates::calc_mag(double X, double Y, double Z)
{
    mag = sqrt( pow(X, 2) + pow(Y, 2) );
    return mag;
}

double Coordinates::calc_theta(double X, double Y)
{
    theta = atan(Y/X);
    return theta;
}

double Coordinates::calc_phi(double X, double Y, double Z)
{
    phi = atan(sqrt(pow(X, 2) + pow(Y, 2))/Z);
    return phi;
}

Cartesian::Cartesian()
{
    x = 0;
    y = 0;
    z = 0;
}

Cartesian::Cartesian(double X, double Y)
{
    x = X;
    y = Y;
}

Cartesian::Cartesian(double X, double Y, double Z)
{
    x = X;
    y = Y;
    z = Z;
}

Polar::Polar()
{
    r = 0;
    theta = 0;
}

Polar::Polar(double X, double Y)
{
    r = sqrt(pow(X, 2) + pow(Y, 2));
    theta = atan(Y/X);
}

Cylindrical::Cylindrical()
{
    rho = 0;
    phi = 0;
    z = 0;
}

Cylindrical::Cylindrical(double X, double Y, double Z)
{
    rho = sqrt(pow(X, 2) + pow(Y, 2));
    phi = atan(Y/X);
    z = Z;
}

Spherical::Spherical()
{
    rho = 0;
    theta = 0;
    phi = 0;
}

Spherical::Spherical(double X, double Y, double Z)
{
    rho = sqrt(pow(X, 2) + pow(Y, 2) + pow(Z, 2));
    theta = atan(Y/X);
    phi = atan(sqrt(pow(X, 2) + pow(Y, 2))/Z);
}

// End of class definitions