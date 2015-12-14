#!/usr/bin/python

import sys
import pandas as pd
import os

for file in sys.argv:
	if "csv" not in file:
		continue
	print "load data from "+file
	df = pd.DataFrame.from_csv(file, index_col=None)
	df.columns=['x', 'y' , 'one']
	df1= df[['x' , 'y']]
	ax = pd.DataFrame.plot(df1,x="x",y="y")
	fig = ax.get_figure()
	fig.savefig(os.path.splitext( os.path.basename(file))[0]+'.jpg')

