import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

# Load the wine dataset from UCI repository
url = "https://archive.ics.uci.edu/ml/machine-learning-databases/wine/wine.data"
column_names = ["Class", "Alcohol", "Malic acid", "Ash", "Alcalinity of ash", "Magnesium", "Total phenols", "Flavanoids",
                "Nonflavanoid phenols", "Proanthocyanins", "Color intensity", "Hue", "OD280/OD315 of diluted wines", "Proline"]
wine_data = pd.read_csv(url, names=column_names)

# Split the data into training and testing sets
X = wine_data.drop("Class", axis=1)
y = wine_data["Class"]
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3)

# Create and train the ID3 decision tree classifier
clf = DecisionTreeClassifier(criterion="entropy")
clf.fit(X_train, y_train)

# Make predictions on the test set and calculate the accuracy
y_pred = clf.predict(X_test)
accuracy = accuracy_score(y_test, y_pred)
print(f"Accuracy: {accuracy}")
