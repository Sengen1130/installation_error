set xrange [0:15]
set yrange [0:25.5]
set zrange [0:1.5]

set xlabel 'x[m]'
set ylabel 'y[m]'
set zlabel 'z[m]'

set xlabel font ",12"
set ylabel font ",12"
set zlabel font ",12"

set xtics 1
set ytics 5

set xtics font ",8"
set ytics font ",8"
set ztics font ",8"

set key top
set key font ",22"
set key spacing 2

splot 'traction_point.dat' every ::0::1 u 1:2:3 title "牽引ユニットに設置誤差が生じた場合の牽引点軌道" with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::2::3 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::4::5 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::6::7 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::8::9 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::10::11 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::12::13 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::14::15 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::16::17 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::18::19 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::20::21 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::22::23 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::24::25 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::26::27 u 1:2:3 notitle with lines linetype rgbcolor 'blue'
replot 'traction_point.dat' every ::0::1 u 4:5:6 title "牽引点の目標軌道" with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::2::3 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::4::5 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::6::7 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::8::9 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::10::11 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::12::13 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::14::15 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::16::17 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::18::19 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::20::21 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::22::23 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::24::25 u 4:5:6 notitle with lines linetype rgbcolor 'red'
replot 'traction_point.dat' every ::26::27 u 4:5:6 notitle with lines linetype rgbcolor 'red'