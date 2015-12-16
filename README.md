# CS510-Fall2015-FinalProject


For the past years fractals (geometric shapes that can be des-integrated into pieces where each of the pieces is a reduced copy of the original shape) have been extensively studied by scholars and academicians. Among many others investigations about fractals, much of the efforts have been devoted to understanding displayed either via rotation or polynomial mapping. 

To get more insights into fractals a project is conducted; which is designated to explore typical infinitely complex images and quasi-typical infinitely complex images such as the Julia and the Mandelbrot Sets and their chaotically intricate and beautiful designs. For the sake of simplicity, through this project we will shorten the Julia Set and Mandelbrot respectively by J-Set and  M-Set.


   * Organisation of the Project

This project consists of two parts; the C-JuliaSets part  and the Cpp-Mandelbrot part. While the first part deals with the Julia Set; the second one treats the Mandelbrot question. Despite that the two subjects that are investigated have similarities in term of the mathematics behind them, they differ in terms of their dynamical properties. In this project, These sets, and the code written to describe them, are sets of complex numbers for specific sequences that do not approach infinity. This project illustrates the mathematics behind the complex dynamic as well as plots their fractal outcomes for visual inspection and exploration.

   
   
The CS10-FallFinalProject folder contains :
   
       + The ReadMe.md whihch is used to display github's summary.
       + plot_data.py file which is a file that contains a python code that supplies ways to visualize the data obtained via simulation.With this file we can also zoom on parts of data.
       + The generate_output.sh file. This is a bash file that contains a bash script which   executes the Julia and the mandelbrot programs.
       + The C-JuliaSet folder. This folder contains complex.h, complex.c, 
         cplane.h, cplane.c, julia.c, and the Makefile. In addition, one can also     see a certain number of files in the form of juliasets_a_b.jpg, where        a and b are respectively the real and the imaginary parts of a complex
         number. 

* Results :

In this project we found that:

a- J-Sets display either reflective or rotational symmetry. If c is a pure real complex number, then the J-Set will display reflective symmetry. In contrast, if c is a complex number, they show  a rotational symmetry.

b- Depending on the value assumed by c, J-Sets can be connected or disconnected.

c- Each J-Set is unique. Such a property makes J-Sets fractal images.

d- M-Sets are symmetric with respect to the real axis

e- M-Sets are bounded.

f- M-Sets can only be called self-similar.

g- M-Sets can be seen as locally connected but not totally connected.

