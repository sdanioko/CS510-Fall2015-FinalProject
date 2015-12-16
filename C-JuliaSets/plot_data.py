import matplotlib as mpl
mpl.use('Agg')  # Disable X server
import matplotlib.pyplot as pyplot
from matplotlib import cm
import pandas as pd
import numpy as np
import sys

if len(sys.argv)!=2:
    print "Input error"
    sys.exit()

csvfile = sys.argv[1]

if ".csv" not in csvfile:
    print "File type error"
    sys.exit()

print csvfile

fname = csvfile[csvfile.rfind('/')+1:-3] + "jpg"
print fname

# Read csvfile
df = pd.read_csv(csvfile,sep=' ',names=list('xyz'))

# Fcking hack for retarded graph
data = df.pivot('y','x','z')
pyplot.xlabel('X')
pyplot.ylabel('Y')
xval,yval = data.columns.values,data.index.values
xt = [xval[0],xval[-1]]
yt = [yval[0],yval[-1]]
pyplot.xticks([0,len(xval)-1],xt)
pyplot.yticks([0,len(yval)-1],yt)

pyplot.imshow(np.log(data.values))
pyplot.gca().invert_yaxis()
pyplot.savefig(fname,dpi=500)
