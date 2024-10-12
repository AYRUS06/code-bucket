# Important libraries to import
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
# Lab 11: 11.	Implement Logistic Regression on a sample dataset
# Data from- https://github.com/nikhilkumarsingh/Machine-Learning-Samples/blob/master/Logistic_Regression/dataset1.csv
import pandas as pd
from sklearn import metrics
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression

data = pd.read_csv(
    'D:\code chef\kk\LabNewPrograms\Lab11 Logistic Regression\dataset1.csv')

x = data.iloc[:, :-1].values
y = data.iloc[:, -1].values

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.3)
er = LogisticRegression().fit(x_train, y_train)
y_pred = er.predict(x_test)
accuracy = accuracy_score(y_test, y_pred)
print('accuracy: ', accuracy)
