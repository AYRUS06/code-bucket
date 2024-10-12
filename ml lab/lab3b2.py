import pandas

data = pandas.read_csv("marine-economy-2007-2020-csv.csv")

sample = data.sample(frac = 0.30)


print(sample)