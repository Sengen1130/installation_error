#ifndef KINEMATICS_HPP
#define KINEMATICS_HPP

#include <cmath>

class Kinematics
{
public:
    double winchPos1[3] = {0, 0, 0};     //winch1の設置位置
    double winchPos2[3] = {25.0, 0, 0};   //winch2の設置位置
    double winchPos3[3] = {25.0, 15.0, 0}; //winch3の設置位置
    double winchPos4[3] = {0, 15.0, 0}; //winch4の設置位置
    double wireLen;
    double x_p;

    //winch三台での順運動学
    //交点の位置(pos.x, pos.y, pos.zの位置を出力)
    //
    //変数について
    //w1:winch1のワイヤ長さ, w2:winch2のワイヤ長さ, w3:winch3のワイヤ長さ
    //winchPos1:winch1の位置, winchPos2:winch2の位置, winchPos3:winch3の位置
    double foward_kinematics(double w1, double w2)
    {
        x_p = (pow(w1, 2) - pow(w2, 2) + pow(winchPos2[0], 2)) / (2 * winchPos2[0]);
        return x_p;
    }

    //winch三台での逆運動学
    //winchのワイヤ長さを出力
    //
    //変数について
    //desPos:交点の目標位置
    double inverse_kinematics_winch1(double x_p, double y_p, double z_p)
    {
        wireLen = sqrt(pow((x_p - winchPos1[0]), 2) + pow((y_p - winchPos1[1]), 2) + pow((z_p - winchPos1[2]), 2)); /*winchPos1 to winchPos◯　◯:winch番号*/

        return wireLen;
    }

    //winch三台での逆運動学
    //winchのワイヤ長さを出力
    //
    //変数について
    //desPos:交点の目標位置
    double inverse_kinematics_winch2(double x_p, double y_p, double z_p)
    {
        wireLen = sqrt(pow((x_p - winchPos2[0]), 2) + pow((y_p - winchPos2[1]), 2) + pow((z_p - winchPos2[2]), 2)); /*winchPos1 to winchPos◯　◯:winch番号*/

        return wireLen;
    }
};

#endif // KINEMATICS_HPP
