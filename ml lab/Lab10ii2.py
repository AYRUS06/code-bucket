import numpy as np
import pandas as pd
from sklearn.preprocessing import LabelEncoder

# Define the number of samples and the number of features
n_samples = 1000
n_features = 4

# Generate random data for the input features
X = np.random.randint(0, 10, size=(n_samples, n_features))

# Generate random labels for the output
y = np.random.randint(0, 2, size=n_samples)

# Create a dataframe to store the data
data = pd.DataFrame(X, columns=[f'feature_{i}' for i in range(n_features)])
data['label'] = y

# Encode the labels as integers
le = LabelEncoder()
data['label'] = le.fit_transform(data['label'])

# Save the data to a CSV file
data.to_csv('dataset.csv', index=False)