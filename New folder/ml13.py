# LAB -- 13 K Means Clustering using Python
import numpy as np
# defining the data points
data = np.array([[2, 10], [2, 5], [8, 4], [5, 8],
                [7, 5], [6, 4], [1, 2], [4, 9]])
# defining the initial cluster centers
centers = np.array([[2, 10], [5, 8], [1, 2]])
# defining the number of clusters
K = 3
# defining the maximum number of iterations
max_iters = 10
# defining the Euclidean distance function


def euclidean_distance(x1, x2):
    return np.sqrt(np.sum((x1 - x2) ** 2))


# k-means clustering algorithm
for i in range(max_iters):
    # initializing empty clusters
    clusters = [[] for _ in range(K)]
    # assigning data points to the closest cluster center
    for point in data:
        distances = [euclidean_distance(point, center) for center in centers]
        closest_center = np.argmin(distances)
        clusters[closest_center].append(point)
# updating the cluster centers
for j in range(K):
    centers[j] = np.mean(clusters[j], axis=0)
# printing the cluster centers after the first round of execution
if i == 0:
    print("Cluster centers after the first round of execution:")
    print(centers[i])
    print()
# printing the first three clusters
if i < 3:
    print("Cluster", i+1, ":", clusters[i])

print('centers: ', centers)
print('clusters: ', clusters)
# Each line  in a cluster is a seperate cluster
