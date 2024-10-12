from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn.tree import DecisionTreeClassifier
from sklearn.svm import SVC
from sklearn.metrics import accuracy_score, confusion_matrix

# Load the iris dataset
iris = datasets.load_iris()
X = iris.data
y = iris.target

# Split the data into training and test sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.25)

# Create classifiers
knn = KNeighborsClassifier()
id3 = DecisionTreeClassifier(criterion='entropy')
svm = SVC()

# Train classifiers
knn.fit(X_train, y_train)
id3.fit(X_train, y_train)
svm.fit(X_train, y_train)

# Make predictions on test set
knn_pred = knn.predict(X_test)
id3_pred = id3.predict(X_test)
svm_pred = svm.predict(X_test)

# Calculate accuracy scores
knn_acc = accuracy_score(y_test, knn_pred)
id3_acc = accuracy_score(y_test, id3_pred)
svm_acc = accuracy_score(y_test, svm_pred)

print('kNN accuracy:', knn_acc)
print('ID3 accuracy:', id3_acc)
print('SVM accuracy:', svm_acc)

knn_cm = confusion_matrix(y_test, knn_pred)
id3_cm = confusion_matrix(y_test, id3_pred)
svm_cm = confusion_matrix(y_test, svm_pred)

print('kNN confusion matrix:')
print(knn_cm)
print('ID3 confusion matrix:')
print(id3_cm)
print('SVM confusion matrix:')
print(svm_cm)
