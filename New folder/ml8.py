# LAB -- 8

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

iris = datasets.load_iris()
iris_data_x = iris.data
iris_data_y = iris.target

iris_data_x_train, iris_data_x_test, iris_data_y_train, iris_data_y_test = train_test_split(
    iris_data_x, iris_data_y, test_size=0.3)
KNN_Clf = KNeighborsClassifier().fit(iris_data_x_train, iris_data_y_train)
print(
    f"K-Nearest Neighbors classifier Accuracy for Wine Dataset : {accuracy_score(iris_data_y_test,KNN_Clf.predict(iris_data_x_test))*100}%")
print(
    f"K-Nearest Neighbors classifier Classification Report: \n{classification_report(iris_data_y_test,KNN_Clf.predict(iris_data_x_test))}")
