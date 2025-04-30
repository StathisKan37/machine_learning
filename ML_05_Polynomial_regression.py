import numpy as np
import matplotlib.pyplot as plt

# Two arrays to represent X axis and Y axis
array_x = [1,2,3,5,6,7,8,9,10,12,13,14,15,16,18,19,21,22]
array_y = [100,90,80,60,60,55,60,65,70,70,75,76,78,79,90,99,99,100]

# Making a polynomial model
model_line = np.poly1d(np.polyfit(array_x, array_y, 3)) 

# Displaying the line
# Starting at position 1, end at position 22
myline = np.linspace(1, 22, 100)

# Displaying the result
plt.scatter(array_x, array_y)
plt.plot(myline, model_line(myline))
plt.show() 

# SOURCE:
# https://www.w3schools.com/python/python_ml_polynomial_regression.asp
