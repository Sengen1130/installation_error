#ifndef INSTALLATION_ERROR_HPP
#define INSTALLATION_ERROR_HPP

class InstallationError
{
public:
    int x;
    double l_1;
    double l_2;
    double X_2;
    double Y_2;
    double X_p;
    double Y_p;
    double Z_p;
    double x_p;
    double y_p;
    double z_p;
    double des_x_p;
    double des_y_p;
    double des_z_p;
    double finDes_x_p;
    double finDes_y_p;
    double finDes_z_p;
    double fin_x_p;
    double fin_y_p;
    double fin_z_p;
    double phi;
    double Fs_x;
    double Fs_y = 25.0;
    double Fs_z = 0;
    double Ff_x;
    double Ff_y = 0;
    double Ff_z = 0;
    double lf = 0.5;
};

#endif //INSTALLATION_ERROR_HPP