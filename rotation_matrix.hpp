#ifndef ROTATION_MATRIX_HPP
#define ROTATION_MATRIX_HPP

#include <cmath>

class RotationMatrix
{
    public:
        double delta_x = 1.0;
        double delta_y = 1.0;
        double delta_z = 0;
        double winchPos1[3] = {0, 0, 0};       //winch1の設置位置
        double winchPos2[3] = {25.0, 0, 0};    //winch2の設置位置
        double winchPos3[3] = {25.0, 15.0, 0}; //winch3の設置位置
        double winchPos4[3] = {0, 15.0, 0};    //winch4の設置位置
        double x;
        double y;

        double theta = atan((winchPos2[0] + delta_x) / (winchPos2[1] + delta_y));

        double rotation_matrix_x(double x_p, double y_p)
        {
            x = cos(theta) * x_p - sin(theta) * y_p;
            return x;
        }

        double rotation_matrix_y(double x_p, double y_p)
        {
            y = sin(theta) * x_p - cos(theta) * y_p;
            return x;
        }
};

#endif //ROTATION_MATRIX_HPP
