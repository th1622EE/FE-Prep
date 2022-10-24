function [roots] = quadraticFormula(a, b, c)
%Find the roots of quadratic expression
% This function takes in the coefficient values of a quadratic expression
% defined by the user (a, b, c) and calculates the roots as root1 and
% root2. The discriminant is specifically isolated to determine if
% positive (two real roots), zero (one repeated real root), negative (no
% real roots). 

discriminant = b^2 - 4*a*c;

root1 = (-b + sqrt(discriminant))/2*a;
root2 = (-b - sqrt(discriminant))/2*a;
roots = [root1 root2];

% The following if-statement will output expected values based on
% discriminant

% if discriminant > 0
%     disp("The expression has a positive discriminant and should output two real roots.")
% elseif discriminant == 0
%     disp("The expression has a zero discriminant and should output one repeated real root.")
% elseif discriminant < 0
%     disp("The expression has a negative discriminant and should output no real roots.")
% end
