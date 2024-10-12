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
# LAB 7
# Download the datset from this link - - https://www.kaggle.com/datasets/devvret/congressional-voting-records?select=house-votes-84.csv
# Upload the datsets into colab and copy the path
df = pd.read_csv('D:\code chef\kk\LabNewPrograms\Lab7\house-votes-84.csv')

house_votes_x = df.drop(['Class Name'], axis=1)
house_votes_y = df['Class Name']

for col in house_votes_x.columns:
    house_votes_x[col] = [1 if vote ==
                          'y' else 0 for vote in house_votes_x[col]]
house_votes_y = [1 if vote == 'republican' else 0 for vote in house_votes_y]
house_votes_x_train, house_votes_x_test, house_votes_y_train, house_votes_y_test = train_test_split(
    house_votes_x, house_votes_y, test_size=0.3)

naive_bayes_classifier = GaussianNB().fit(
    house_votes_x_train, house_votes_y_train)
print(
    f"Naive Bayes Accuracy for Wine Dataset : {accuracy_score(house_votes_y_test,naive_bayes_classifier.predict(house_votes_x_test))*100}%")
print(
    f"Naive Bayes Classification Report: \n{classification_report(house_votes_y_test,naive_bayes_classifier.predict(house_votes_x_test))}")
