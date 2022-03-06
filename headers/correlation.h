//
// Created by will on 06/03/2022.
//

#ifndef MATICA_CORRELATION_H
#define MATICA_CORRELATION_H


#include <vector>

namespace correlationH {

    double correlation(std::vector<double> &x, std::vector<double> &y);

    double correlation_coefficient(std::vector<double> &x, std::vector<double> &y);

    double correlation_coefficient_pearson(std::vector<double> &x, std::vector<double> &y);

    double correlation_coefficient_spearman(std::vector<double> &x, std::vector<double> &y);

    double correlation_coefficient_kendall(std::vector<double> &x, std::vector<double> &y);
}


#endif //MATICA_CORRELATION_H
