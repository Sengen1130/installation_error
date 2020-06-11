set xrange [-0.5:15]
set yrange [0:25.5]

set xlabel 'x[m]'
set ylabel 'y[m]'

set size square

set xtics 1
set ytics 5

set key left top
plot 'traction_point.dat' every ::0::1 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::2::3 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::4::5 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::6::7 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::8::9 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::10::11 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::12::13 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::14::15 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::16::17 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::18::19 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::20::21 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::22::23 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::24::25 u 1:2 title '' with lines linetype rgbcolor 'purple'
replot 'traction_point.dat' every ::26::27 u 1:2 title '' with lines linetype rgbcolor 'purple'


replot 'traction_point.dat' every ::0::1 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::2::3 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::4::5 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::6::7 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::8::9 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::10::11 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::12::13 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::14::15 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::16::17 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::18::19 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::20::21 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::22::23 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::24::25 u 3:4 title '' with lines linetype rgbcolor 'green'
replot 'traction_point.dat' every ::26::27 u 3:4 title '' with lines linetype rgbcolor 'green'