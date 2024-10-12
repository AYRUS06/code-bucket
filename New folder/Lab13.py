import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.cluster = -1
        self.minDist = float('inf')

    def distance(self, p):
        return (p.x - self.x) ** 2 + (p.y - self.y) ** 2

points = [Point(2, 10), Point(2, 5), Point(8, 4), Point(5, 8), Point(7, 5), Point(6, 4), Point(1, 2), Point(4, 9)]
centroids = [points[1], points[2], points[6]]

k = 3
converged = False
firstRound = True

while not converged:
    converged = True

    for p in points:
        p.minDist = float('inf')
        for i in range(k):
            dist = p.distance(centroids[i])
            if dist < p.minDist:
                p.minDist = dist
                p.cluster = i

    for i in range(k):
        sumX = sumY = count = 0
        for p in points:
            if p.cluster == i:
                sumX += p.x
                sumY += p.y
                count += 1
        if count > 0:
            newCentroid = Point(sumX / count, sumY / count)
            if newCentroid.distance(centroids[i]) > 0.0001:
                converged = False
                centroids[i] = newCentroid

    if firstRound:
        print("Cluster centers after first round: ")
        for i in range(k):
            print(f"Cluster {i + 1}: ({centroids[i].x}, {centroids[i].y})")

        print("First three clusters: ")
        for i in range(k):
            print(f"Cluster {i + 1}: ", end='')
            for p in points:
                if p.cluster == i:
                    print(f"({p.x}, {p.y}) ", end='')
            print()

        firstRound = False