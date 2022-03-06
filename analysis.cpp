//
// Created by will on 06/03/2022.
//

#include <vector>
#include <random>
#include "headers/analysis.h"

using namespace analysis;

// Initialize the centroids
std::vector<std::vector<double>> analysis::initialize_centroids(std::vector<std::vector<double>> data, int k) {
    // Initialize the centroids
    std::vector<std::vector<double>> centroids;

    // Initialize the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, data.size() - 1);

    // Initialize the centroids
    for (int i = 0; i < k; i++) {
        // Initialize the centroid
        std::vector<double> centroid;

        // Initialize the centroid
        for (int j = 0; j < data[0].size(); j++) {
            // Initialize the centroid
            centroid.push_back(data[dis(gen)][j]);
        }

        // Add the centroid to the centroids
        centroids.push_back(centroid);
    }

    // Return the centroids
    return centroids;
}

// Calculate the k-means clustering from the given data
void analysis::kmeans(std::vector<std::vector<double>> data, int k, int max_iterations, int max_iterations_without_improvement,
            std::vector<std::vector<double>> &centroids, std::vector<int> &cluster_assignments) {
    // Initialize the centroids
    centroids = initialize_centroids(data, k);

    // Initialize the cluster assignments
    cluster_assignments = std::vector<int>(data.size(), 0);

    // Initialize the number of iterations without improvement
    int iterations_without_improvement = 0;

    // Iterate until the maximum number of iterations is reached or the maximum number of iterations without improvement is reached
    while (iterations_without_improvement < max_iterations_without_improvement) {
        // Calculate the new cluster assignments
        cluster_assignments = calculate_cluster_assignments(data, centroids);

        // Calculate the new centroids
        centroids = calculate_centroids(data, cluster_assignments, k);

        // Check if the new centroids are the same as the old centroids
        if (centroids == calculate_centroids(data, cluster_assignments, k)) {
            // Increment the number of iterations without improvement
            iterations_without_improvement++;
        } else {
            // Reset the number of iterations without improvement
            iterations_without_improvement = 0;
        }
    }
}

// Calculate the standard deviation of the given data
double analysis::calculate_standard_deviation(std::vector<std::vector<double>> data) {
    // Initialize the standard deviation
    double standard_deviation = 0;

    // Calculate the standard deviation
    for (int i = 0; i < data.size(); i++) {
        // Calculate the standard deviation
        for (int j = 0; j < data[0].size(); j++) {
            // Calculate the standard deviation
            standard_deviation += pow(data[i][j], 2);
        }
    }

    // Calculate the standard deviation
    standard_deviation = sqrt(standard_deviation / data.size());

    // Return the standard deviation
    return standard_deviation;
}

// Calculate the variance of the given data
double analysis::calculate_variance(std::vector<std::vector<double>> data) {
    // Initialize the variance
    double variance = 0;

    // Calculate the variance
    for (int i = 0; i < data.size(); i++) {
        // Calculate the variance
        for (int j = 0; j < data[0].size(); j++) {
            // Calculate the variance
            variance += pow(data[i][j], 2);
        }
    }

    // Calculate the variance
    variance = variance / data.size();

    // Return the variance
    return variance;
}

// Calulate the covariance of the given data
double analysis::calculate_covariance(std::vector<std::vector<double>> data) {
    // Initialize the covariance
    double covariance = 0;

    // Calculate the covariance
    for (int i = 0; i < data.size(); i++) {
        // Calculate the covariance
        for (int j = 0; j < data[0].size(); j++) {
            // Calculate the covariance
            covariance += data[i][j] * data[i][j];
        }
    }

    // Calculate the covariance
    covariance = covariance / data.size();

    // Return the covariance
    return covariance;
}

// Calculate the correlationH of the given data
double analysis::calculate_correlation(std::vector<std::vector<double>> data) {
    // Initialize the correlationH
    double correlation = 0;

    // Calculate the correlationH
    for (int i = 0; i < data.size(); i++) {
        // Calculate the correlationH
        for (int j = 0; j < data[0].size(); j++) {
            // Calculate the correlationH
            correlation += data[i][j] * data[i][j];
        }
    }

    // Calculate the correlationH
    correlation = correlation / data.size();

    // Return the correlationH
    return correlation;
}

