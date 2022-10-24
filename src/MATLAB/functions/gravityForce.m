function [F_g] = gravityForce(m2, d2)
% Newton's Law of Universal Gravitation
% 
% This function requires user-defined input for the values of the mass (m2)
% of the object in kilograms (kg) and the distance (d2) in meters above sea
% level to calculate the gravitation force (F_g) relative to the product of
% the user-defined mass (m2), the mass of the earth (m2), and the radial
% distance from the center of the earth to the mass of interest (m2) all
% divided by the radial distance between m1 to m2 squared

% The following values are constants
m1 = 5.972e24; %This is the mass of the earth (kg)
G = 6.6743e-11; %This is the gravitational constant relative to earth
seaLevel = 6371e3; %Fixed distance from center of earth in meters (m)

% The following are user-defined input values
% m2 = double(input("Enter the weight in kgs of the second mass: "));
% d2 = double(input("Enter the distance above sea level in meters: "));

% The following are used in calculation of gravitational Force (F_g)
r = seaLevel + d2;
F_g = (G*m1*m2)/r^2;
end
