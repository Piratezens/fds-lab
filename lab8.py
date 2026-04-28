from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score
import numpy as np

X = np.array([[1],[2],[3],[4],[5]])
y = np.array([0,0,0,1,1])

model = LogisticRegression()
model.fit(X, y)

pred = model.predict(X)

print("Accuracy:", accuracy_score(y, pred))