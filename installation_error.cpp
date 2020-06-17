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

    error.phi = atan(1.5 / error.Fs_y) * PI / 180;

    for (error.x = 1; error.x < 15; error.x++)
    {
        error.l_1 = sqrt(1.5 - error.lf + pow(error.x, 2));
        error.l_2 = sqrt(1.5 - error.lf + pow((15 - error.x), 2));

        error.X_2 = rotation.clockwise_rotation_matrix_x((rotation.winchPos2[0] + rotation.delta_x), (rotation.winchPos2[1] + rotation.delta_y));
        error.Y_2 = rotation.clockwise_rotation_matrix_y((rotation.winchPos2[0] + rotation.delta_x), (rotation.winchPos2[1] + rotation.delta_y));

        error.X_p = kinematics.foward_kinematics(error.l_1, error.l_2, error.X_2);
        error.Y_p = 0;

        error.x_p = rotation.counter_clockwise_rotation_matrix_x(error.X_p, error.Y_p);
        error.y_p = rotation.counter_clockwise_rotation_matrix_y(error.X_p, error.Y_p);
        error.z_p = error.lf;

        error.des_x_p = error.x;
        error.des_y_p = 0;
        error.des_z_p = error.lf;

        error.finDes_x_p = error.x;
        error.finDes_y_p = 25.0 - error.lf * cos(error.phi);
        error.finDes_z_p = error.lf * sin(error.phi);

        error.fin_x_p = rotation.counter_clockwise_rotation_matrix_x(error.finDes_x_p, error.finDes_y_p);
        error.fin_y_p = rotation.counter_clockwise_rotation_matrix_y(error.finDes_x_p, error.finDes_y_p);
        error.fin_z_p = error.finDes_z_p;

        fout << error.x_p << " " << error.y_p << " " << error.z_p << " " << error.des_x_p << " " << error.des_y_p << " " << error.des_z_p << std::endl;
        fout << error.fin_x_p << " " << error.fin_y_p << " " << error.fin_z_p << " " << error.finDes_x_p << " " << error.finDes_y_p << " " << error.finDes_z_p << std::endl;
    }

    return 0;
}