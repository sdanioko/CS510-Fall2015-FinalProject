# This file will be used to better visualize our data file. Plus, it will allow us
# zoom on different parts of the JSets and those of of the frontieres of the MSets.


import matplotlib as mpl
mpl.use('Agg')  # Disable X server
import matplotlib.pyplot as pyplot
from matplotlib import cm
import pandas as pd
import numpy as np
import sys

if len(sys.argv)!=2:
    print "Input error"
    sys.exit() # Throw an exception

csvfile = sys.argv[1] # An automatic list of strings representing the arguments on the command-line
# while take the name of the file as the first argument


if ".csv" not in csvfile:
    print "File type error"
    sys.exit() # Throw an exception. 

print csvfile

fname = csvfile[csvfile.rfind('/')+1:-3] + "jpg"
print fname

# Read csvfile
df = pd.read_csv(csvfile,sep=' ',names=list('xyz'))

# Plot the graph

data = df.pivot('y','x','z')
pyplot.xlabel('X') # label the x axis with X
pyplot.ylabel('Y') # label the y axis with Y
xval,yval = data.columns.values,data.index.values # set xval and yval
xt = [xval[0],xval[-1]] # set xt
yt = [yval[0],yval[-1]] # set yt
pyplot.xticks([0,len(xval)-1],xt)  # specify a rotation for the tick labels 
pyplot.yticks([0,len(yval)-1],yt)  # You can specify a rotation for the tick labels
pyplot.imshow(np.log(data.values)) # display the image by using matplotlib.pyplot using imshow() 
pyplot.gca().invert_yaxis() # get the y axis and invert it
pyplot.savefig(fname,dpi=500) # save the figure

