import pandas as pd
from sklearn.linear_model import LinearRegression
import numpy as np
import matplotlib

dataset = pd.read_csv("./Salary_Data.csv")
#dataset.plot(x='YearsExperience', y='Salary')
#matplotlib.pyplot.show()
dataset = dataset.to_numpy()
X = dataset[:, 0]
Y = dataset[:, 1]

X = X.reshape(-1, 1)
print(X)
print(Y)
model = LinearRegression(n_jobs=-1)
model.fit(X, Y)
print(f"Intercept(B0): {model.intercept_}")
print(f"Coefficient(B1): {model.coef_}")
#print(model.predict(X))
print(model.score(X,Y))