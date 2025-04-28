import numpy
from scipy import stats

array_1 = [99,86,87,88,111,86,103,87,94,78,77,85,86]
print(f'Array: {array_1}')

# Mean: (x1 + x2 + x3 + ... + xn) / n
print(f'Mean value: {numpy.mean(array_1)}')

# Median: The value in the middle of the sorted array
print(f'Median value: {numpy.median(array_1)}')
# If there are two, divide the sum by two

# Median: The that appears the most number of times
print(stats.mode(array_1))

# Standard deviation: Describes how spread out the values are
print(f'Standard deviation: {numpy.std(array_1)}')

# Percentiles: Describes the value that a given percent of the values are lower than
print(f'Percentiles (75%): {numpy.percentile(array_1, 75)}')

# SOURCE:
# https://www.w3schools.com/python/python_ml_mean_median_mode.asp
# https://www.w3schools.com/python/python_ml_standard_deviation.asp
# https://www.w3schools.com/python/python_ml_percentile.asp
