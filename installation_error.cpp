#include <iostream>
#include <fstream>
#include <cmath>
#include "include/installation_error.hpp"
#include "include/kinematics.hpp"
#include "include/rotation_matrix.hpp"

int main()
{
    InstallationError error;
    Kinematics kinematics;
    RotationMatrix rotation;

    std::ofstream fout("traction_point.dat");
    if (!fout)
    {
        std::cout << "ファイルをオープンできませんでした" << std::endl;
    }

    for (error.x = 1; error.x < 15; error.x++)
    {
        error.l_1 = sqrt(1 + pow(error.x, 2));
        error.l_2 = sqrt(1 + pow((15 - error.x), 2));

        error.X_2 = rotation.clockwise_rotation_matrix_x((rotation.winchPos2[0] + rotation.delta_x), (rotation.winchPos2[1] + rotation.delta_y));
        error.Y_2 = rotation.clockwise_rotation_matrix_y((rotation.winchPos2[0] + rotation.delta_x), (rotation.winchPos2[1] + rotation.delta_y));

        error.X_p = kinematics.foward_kinematics(error.l_1, error.l_2, error.X_2);
        error.Y_p = 0;

        error.x_p = rotation.counter_clockwise_rotation_matrix_x(error.X_p, error.Y_p);
        error.y_p = rotation.counter_clockwise_rotation_matrix_y(error.X_p, error.Y_p);

        error.des_x_p = error.x;
        error.des_y_p = 0;

        error.finDes_x_p = error.x;
        error.finDes_y_p = 25.0;

        error.fin_x_p = rotation.counter_clockwise_rotation_matrix_x(error.x_p, error.finDes_y_p);
        error.fin_y_p = rotation.counter_clockwise_rotation_matrix_y(error.x_p, error.finDes_y_p);

        fout << error.x_p << " " << error.y_p << " " << error.des_x_p << " " << error.des_y_p << std::endl;
        fout << error.fin_x_p << " " << error.fin_y_p << " " << error.finDes_x_p << " " << error.finDes_y_p << std::endl;
    }

    return 0;
}