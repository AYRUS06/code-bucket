# LAB -- 10
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
from sklearn.metrics import accuracy_score
from sklearn.tree import DecisionTreeClassifier
from sklearn.neighbors import KNeighborsClassifier
import numpy as np
from sklearn import svm
from sklearn.model_selection import train_test_split
x = iris.data
y = iris.target
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.3)


clf = svm.SVC()
clf.fit(x_train, y_train)
y_pred_svm = clf.predict(x_test)
clf.support_vectors_
print(
    f"SVM Classification Report: \n{classification_report(y_test, y_pred_svm)}")

knn = KNeighborsClassifier()


knn = knn.fit(x_train, y_train)
y_pred_knn = knn.predict(x_test)
print(
    f"KNN Classification Report: \n{classification_report(y_test, y_pred_knn)}")


id3 = DecisionTreeClassifier(criterion='entropy')
id3.fit(x_train, y_train)
y_pred_id3 = id3.predict(x_test)
accuracy_id3 = accuracy_score(y_test, y_pred_id3)
print(f"ID3 Accuracy: {accuracy_id3}")
print(
    f"ID3 Classification Report: \n{classification_report(y_test, y_pred_id3)}")
