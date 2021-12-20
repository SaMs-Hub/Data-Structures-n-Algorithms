import numpy as np
twoDArray = np.array([[11, 15, 10, 6], [10, 14, 11, 5], [12, 17, 12, 8], [15, 18, 14, 9] ])

# axis 0 represents rows, axis 1 represents columns
newTDArray = np.delete(twoDArray, 1, axis=1)
print(newTDArray)
