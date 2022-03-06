//
// Created by will on 06/03/2022.
//

#ifndef MATICA_ANALYSIS_H
#define MATICA_ANALYSIS_H

namespace analysis {

    std::vector<std::vector<double>> initialize_centroids(std::vector<std::vector<double>> data, int k);

    void
    kmeans(std::vector<std::vector<double>> data, int k, int max_iterations, int max_iterations_without_improvement,
           std::vector<std::vector<double>> &centroids, std::vector<int> &cluster_assignments);

    double calculate_standard_deviation(std::vector<std::vector<double>> data);

    double calculate_variance(std::vector<std::vector<double>> data);

    double calculate_covariance(std::vector<std::vector<double>> data);

    double calculate_correlation(std::vector<std::vector<double>> data);
}

#endif //MATICA_ANALYSIS_H
