#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// defining the data points
double data[8][2] = {{2, 10}, {2, 5}, {8, 4}, {5, 8}, {7, 5}, {6, 4}, {1, 2}, {4, 9}};

// defining the initial cluster centers
double centers[3][2] = {{2, 10}, {5, 8}, {1, 2}};

// defining the number of clusters
const int K = 3;

// defining the maximum number of iterations
const int max_iters = 10;

// defining the Euclidean distance function
double euclidean_distance(double x1[], double x2[])
{
    double dist = 0;
    for (int i = 0; i < 2; i++)
    {
        dist += pow((x1[i] - x2[i]), 2);
    }
    return sqrt(dist);
}

int main()
{
    // k-means clustering algorithm
    for (int i = 0; i < max_iters; i++)
    {
        // initializing empty clusters
        vector<vector<vector<double>>> clusters(K);

        // assigning data points to the closest cluster center
        for (int j = 0; j < 8; j++)
        {
            double distances[K];
            for (int k = 0; k < K; k++)
            {
                distances[k] = euclidean_distance(data[j], centers[k]);
            }
            int closest_center = distance(distances, min_element(distances, distances + K));
            clusters[closest_center].push_back(vector<double>{data[j][0], data[j][1]});
        }

        // updating the cluster centers
        for (int j = 0; j < K; j++)
        {
            double sum[2] = {0, 0};
            for (int k = 0; k < clusters[j].size(); k++)
            {
                sum[0] += clusters[j][k][0];
                sum[1] += clusters[j][k][1];
            }
            if (clusters[j].size() > 0)
            {
                centers[j][0] = sum[0] / clusters[j].size();
                centers[j][1] = sum[1] / clusters[j].size();
            }
        }

        // printing the cluster centers after the first round of execution
        if (i == 0)
        {
            cout << "Cluster centers after the first round of execution:" << endl;
            for (int j = 0; j < K; j++)
            {
                cout << "(" << centers[j][0] << ", " << centers[j][1] << ")" << endl;
            }
            cout << endl;
        }

        // printing the first three clusters
        if (i < 3)
        {
            cout << "Cluster " << i + 1 << ":" << endl;
            for (int j = 0; j < K; j++)
            {
                cout << "Cluster " << j + 1 << ": ";
                for (int k = 0; k < clusters[j].size(); k++)
                {
                    cout << "(" << clusters[j][k][0] << ", " << clusters[j][k][1] << ") ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
