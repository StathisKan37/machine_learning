import numpy
from sklearn import metrics
import matplotlib.pyplot as plt

actual = numpy.random.binomial(1,.9,size = 1000)
predicted = numpy.random.binomial(1,.9,size = 1000)

confusion_matrix = metrics.confusion_matrix(actual, predicted)

cm_display = metrics.ConfusionMatrixDisplay(confusion_matrix = confusion_matrix, display_labels = [0, 1])

# Printing the proportion of correct predictions
print(f'Accuracy: {metrics.accuracy_score(actual, predicted)}')
print(f'Precision: {metrics.precision_score(actual, predicted)}')
print(f'Sensitivity recall: {metrics.recall_score(actual, predicted)}')
print(f'Specificity: {metrics.recall_score(actual, predicted, pos_label=0)}')
print(f'F1_score: {metrics.f1_score(actual, predicted)}')

cm_display.plot()
plt.show()

# SOURCE:
# https://www.w3schools.com/python/python_ml_confusion_matrix.asp
