# Important libraries to import
from numpy.linalg import inv
import numpy as np
import pandas as pd
from sklearn import datasets
from sklearn.metrics import accuracy_score
from sklearn.metrics import classification_report
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression, LinearRegression
from sklearn.neighbors import KNeighborsClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.tree import DecisionTreeClassifier
from sklearn.preprocessing import StandardScaler
from sklearn.svm import SVC
# LAB -- 5
# Eigenvalue
import numpy as np
from numpy.linalg import qr
a = np.array([[0, 2, 3],
              [2, 3, 5],
              [3, 4, 5]])

p = [1, 5, 10, 20, 30]
for i in range(30):
    q, r = qr(a)
    a = np.dot(r, q)
    if i+1 in p:
        print(f'Iteration {i+1}:')
        print(a)
# Eigenvector corresponding to maximum eigenvalue


def normalize(x):
    fac = abs(x).max()
    x_n = x / x.max()
    return fac, x_n


x = np.array([1, 1, 1])
a = np.array([[0, 2, 3],
              [2, 3, 5],
              [3, 4, 5]])

for i in range(8):
    x = np.dot(a, x)
    lambda_1, x = normalize(x)

print('Eigenvalue:', lambda_1)
print('Eigenvector:', x)

# Eigenvector corresponding to minimum eigenvalue
a_inv = inv(a)

for i in range(8):
    x = np.dot(a_inv, x)
    lambda_1, x = normalize(x)

print('Eigenvalue:', lambda_1)
print('Eigenvector:', x)
