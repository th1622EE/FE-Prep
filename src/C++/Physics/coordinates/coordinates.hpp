// Author:  Tim Holden
// Project: Physics
// File:    coordinates.hpp
// Date:    20221006

#ifndef coordinates_hpp
#define coordinates_hpp

class Coordinates
{

public:
    
    // Constructors
    Coordinates();
    Coordinates(double, double);
    Coordinates(double, double, double);

    // Member variables
    double x = 0;
    double y = 0;
    double z = 0;
    double r = 0;
    double rho = 0;
    double theta = 0;
    double phi = 0;
    double mag = 0;

    // Accessors
    void set_x(double);
    void set_y(double);
    void set_z(double);
    void set_r(double);
    void set_rho(double);
    void set_theta(double);
    void set_phi(double);
    double get_x() const;
    double get_y() const;
    double get_z() const;
    double get_r() const;
    double get_rho() const;
    double get_theta() const;
    double get_phi() const;

    // Methods
    double calc_mag(double, double);
    double calc_mag(double, double, double);
    double calc_theta(double, double);
    double calc_phi(double, double, double);

  /*virtual double cart2polar(double, double);
    virtual double polar2cart();
    virtual double cart2cyl();
    virtual double cyl2cart();
    virtual double cart2sph();
    virtual double sph2cart();*/

};


class Cartesian : public Coordinates
{

public:

    // Constructors
    Cartesian();
    Cartesian(double, double);
    Cartesian(double, double, double);

};


class Polar : Coordinates
{

public:

    // Constructor
    Polar();
    Polar(double, double);

};


class Cylindrical : Coordinates
{

public:

    // Constructor
    Cylindrical();
    Cylindrical(double, double, double);

};


class Spherical : Coordinates
{

public:

    // Constructor
    Spherical();
    Spherical(double, double, double);

};

#endif // coordinates_hpp