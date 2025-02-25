# -*- coding: utf-8 -*-
"""Lab4_LinearRegression

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1VvaoIJoJ-USuX82uAMblp6UH4FflDizM
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

from sklearn import datasets
from sklearn.metrics import mean_squared_error, r2_score
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

iris = datasets.load_iris()
iris.target
X = iris.data
Y = iris.target
print('X: ', X)
print('\n\nY: ', Y)

clf = LinearRegression()
x_train, x_test, y_train, y_test = train_test_split(
    X, Y, test_size=0.2, random_state=40)

clf.fit(x_train, y_train)
score = clf.score(x_test, y_test)
print(score)
pred = clf.predict(x_test)
print('pred: ', pred)

print(clf.intercept_)
print(r2_score(pred, y_test))
print(clf.coef_)
print(mean_squared_error(pred, y_test))
