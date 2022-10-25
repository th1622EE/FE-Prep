#ifndef kinematics_hpp
#define kinematics_hpp

class Kinematics
{

private:

    double x0   = 0;
    double x    = 0;
    double v0   = 0;
    double v    = 0;
    double a    = 0;
    double t    = 0;

public:

    Kinematics();
    Kinematics( double, double, double );
    Kinematics( double, double, double, double );

    void set_x0( double& );
    void set_x( double& );
    void set_x0( double& );
    void set_v0( double& );
    void set_v( double& );
    void set_a( double& );
    void set_t( double& );

    double get_x0() const;
    double get_x() const;
    double get_x0() const;
    double get_v0() const;
    double get_v() const;
    double get_a() const;
    double get_t() const;

    virtual double velocityFinal( double, double, double );
    virtual double velocityInitial( double, double, double );
    virtual double displacement( double, double, double );
    virtual double displacement( double, double, double, double );

};

#endif //End of kinematics.hpp interface file