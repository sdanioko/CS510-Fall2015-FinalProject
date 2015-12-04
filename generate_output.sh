#!/bin/bash
cd -JuliaSets
make clean
make
./julia -0.1035 -0.1025 -0.2002 -0.1992 1000 1000 -0.70176 -0.3842 > juliaset.csv
cd -
cd Cpp-Mandelbrot
make clean
make
./mandelbrot -1.2 -1.1 0.2 0.3 1000 1000 > mandelbrot.csv

