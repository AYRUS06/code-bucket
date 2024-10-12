import numpy as np
import pandas as pd
from sklearn.datasets import fetch_california_housing
from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split

# Step 1: Prepare the data
california_data = fetch_california_housing()
X = california_data.data
y = california_data.target.reshape(-1, 1)
scaler = StandardScaler()
X = scaler.fit_transform(X)
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Step 2: Initialize the network
input_size = X_train.shape[1]
hidden_size = 32
output_size = 1
weights1 = np.random.randn(input_size, hidden_size) / np.sqrt(input_size)
weights2 = np.random.randn(hidden_size, output_size) / np.sqrt(hidden_size)

# Step 3: Forward pass


def forward(X):
    hidden_layer = np.dot(X, weights1)
    hidden_layer = np.maximum(hidden_layer, 0)
    output_layer = np.dot(hidden_layer, weights2)
    return output_layer

# Step 4: Calculate error


def mse_loss(y_true, y_pred):
    return np.mean(np.square(y_true - y_pred))

# Step 5: Backward pass


def backward(X, y_true, y_pred, hidden_layer):
    output_error = y_pred - y_true
    output_delta = output_error / X.shape[0]
    hidden_error = np.dot(output_delta, weights2.T)
    hidden_delta = hidden_error * (hidden_layer > 0)
    weights2_update = np.dot(hidden_layer.T, output_delta)
    weights1_update = np.dot(X.T, hidden_delta)
    return weights1_update, weights2_update


# Step 6: Train the network
learning_rate = 0.01
epochs = 1000
for epoch in range(epochs):
    # Forward pass
    hidden_layer = np.dot(X_train, weights1)
    hidden_layer = np.maximum(hidden_layer, 0)
    output_layer = np.dot(hidden_layer, weights2)

    # Calculate loss
    loss = mse_loss(y_train, output_layer)

    # Backward pass
    weights1_update, weights2_update = backward(
        X_train, y_train, output_layer, hidden_layer)
    weights1 -= learning_rate * weights1_update
    weights2 -= learning_rate * weights2_update

    # Print progress
    if epoch % 100 == 0:
        print(f"Epoch {epoch}: Loss = {loss:.4f}")

# Step 7: Evaluate the network
y_pred = forward(X_test)
rmse = np.sqrt(mse_loss(y_test, y_pred))
print(f"RMSE = {rmse:.4f}")
