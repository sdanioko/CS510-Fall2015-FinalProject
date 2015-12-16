#!/bin/bash
# In this bash file, the default sets are obtained when the computation space is described by
# xmin = -2, xmax = 2, ymin = -2, ymax = 2, xpoints = 1000, ypoints = 1000 and c = 1.037 + 0.17i.
# In here, a csv file for a juliaset is designated as juliaseta_b.csv where a is the real part 
# and b the imaginary part. Despite that a mandelbrot set runs over a complex plane, i abusedly 
# designated a csv file for a mandelbrot set as mandelbrota_b.csv. This is mainly to mention that
# line 17 was let to be executed in order to show that the Mandelbrot set remains the same.

cd C-JuliaSets
make clean
make
./julia -2 2 -2 2 1000 1000 -1.037 0.17 > ../juliaset-1.037_0.17.csv
cd -
cd Cpp-Mandelbrot
make clean
make
./mandelbrot -2 2 -2 2 1000 1000 > ../mandelbrot-1.037_0.17.csv





