import math
import pandas
import matplotlib

data = pandas.read_csv("airtravel.csv")

data.plot()
matplotlib.pyplot.show()