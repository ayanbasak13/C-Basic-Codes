import numpy as np

X = np.array([[0,0,1],
              [0,1,1],
              [1,0,1],
              [1,1,1]])

y = np.array([[0],[1],[1],[0]])



print(X.shape)
weights1 = np.random.rand(X.shape[1],4)
weights2   = np.random.rand(4,1)

'''def sigmoid_derivative(x):
    return x * (1.0 - x)

k = sigmoid_derivative(y)'''