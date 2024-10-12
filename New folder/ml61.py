# Important libraries to import
from sklearn.svm import SVC
from sklearn.preprocessing import StandardScaler
from sklearn.tree import DecisionTreeClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.neighbors import KNeighborsClassifier
from sklearn.linear_model import LogisticRegression, LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import classification_report
from sklearn.metrics import accuracy_score
from sklearn import datasets
import pandas as pd
import numpy as np
from chefboost import Chefboost as chef
# from google.colab import drive
# drive.mount('/content/drive')
# LAB 6 - I
# Download the data from the given link https://www.kaggle.com/datasets/priy998/golf-play-dataset?select=golf_df.csv
# //pip install chefboost
golf_dataset = pd.read_csv('D:\code chef\kk\LabNewPrograms\Lab6\golf_df.csv')
config = {'algorithm': 'C4.5'}
model = chef.fit(golf_dataset, config=config, target_label='Play')
