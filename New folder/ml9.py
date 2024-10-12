# LAB -- 9

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

url = 'D:\code chef\kk\LabNewPrograms\Lab9\parkinsons.data'  # data for lab 9
data = pd.read_csv(url)

parkinson_data_x = data.drop(['status', 'name'], axis=1)
parkinson_data_y = data['status']

parkinson_data_x_train, parkinson_data_x_test, parkinson_data_y_train, parkinson_data_y_test = train_test_split(
    parkinson_data_x, parkinson_data_y, test_size=0.3)
svm_clf = SVC().fit(parkinson_data_x_train, parkinson_data_y_train)
print(
    f"Support Vector Classifier Accuracy for Wine Dataset : {accuracy_score(parkinson_data_y_test,svm_clf.predict(parkinson_data_x_test))*100}%")
print(
    f"Support Vector Classifier Classification Report: \n{classification_report(parkinson_data_y_test,svm_clf.predict(parkinson_data_x_test))}")
