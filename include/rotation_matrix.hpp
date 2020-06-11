#ifndef ROTATION_MATRIX_HPP
#define ROTATION_MATRIX_HPP
#include <cmath>
#define PI 3.14

class RotationMatrix
{
public:
    double delta_x = 0.5;
    double delta_y = 0.5;
    double delta_z = 0;
    double winchPos1[3] = {0, 0, 0};       //winch1の設置位置
    double winchPos2[3] = {15.0, 0, 0};    //winch2の設置位置
    double winchPos3[3] = {15.0, 25.0, 0}; //winch3の設置位置
    double winchPos4[3] = {0, 25.0, 0};    //winch4の設置位置

    double degree = atan((winchPos2[0] + delta_x) / (winchPos2[1] + delta_y));
    double theta = degree * PI / 180;

    double clockwise_rotation_matrix_x(double x_p, double y_p)
    {
        double x = cos(-theta) * x_p - sin(-theta) * y_p;
        return x;
    }

    double clockwise_rotation_matrix_y(double x_p, double y_p)
    {
        double y = sin(-theta) * x_p + cos(-theta) * y_p;
        return y;
    }

    double counter_clockwise_rotation_matrix_x(double x_p, double y_p)
    {
        double x = cos(theta) * x_p - sin(theta) * y_p;
        return x;
    }

    double counter_clockwise_rotation_matrix_y(double x_p, double y_p)
    {
        double y = sin(theta) * x_p + cos(theta) * y_p;
        return y;
    }
};

#endif //ROTATION_MATRIX_HPP
