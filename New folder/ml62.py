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
#LAB_6 -- II
wine_dataset = datasets.load_wine()
wine_x = wine_dataset.data
wine_y = wine_dataset.target
wine_x_train, wine_x_test, wine_y_train, wine_y_test = train_test_split(
    wine_x, wine_y, test_size=0.3)

# As id3 tree algorithm use entropy for loss calculation
decision_tree_clf = DecisionTreeClassifier(criterion='entropy')
decision_tree_clf.fit(wine_x_train, wine_y_train)

print(
    f"ID3 Accuracy for Wine Dataset : {accuracy_score(wine_y_test,decision_tree_clf.predict(wine_x_test))*100}%")
print(
    f"ID3 Classification Report: \n{classification_report(wine_y_test, decision_tree_clf.predict(wine_x_test))}")
