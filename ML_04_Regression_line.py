import matplotlib.pyplot as plt
import numpy as np
from scipy import stats

# This function returns the regression line
def regress_line(array_x):
  return array_x * slope + intercept

# Two arrays to represent X axis and Y axis
array_x = np.sort(np.random.randint(0, 99, 30)) - np.random.randint(0,10,30)
array_y = np.sort(np.random.randint(0, 99, 30))

# Linear Regression Calculation
slope, intercept, r, pvalue, std_err = stats.linregress(array_x, array_y)
#     slope: How much y increases for a unit increase in x
# intercept: The value of y when x = 0
#         r: How strong and linear the relationship is (-1 to 1)
#    pvalue: Tests the null hypothesis that the slope is zero
#   std_err: The standard error of the estimated slope.

# Creating the regression line
reg_line = list(map(regress_line, array_x))

# Displaying the result
plt.scatter(array_x, array_y)
plt.plot(reg_line, array_x)
plt.show()

# SOURCE:
# https://www.w3schools.com/python/python_ml_linear_regression.asp
