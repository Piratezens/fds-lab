from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import numpy as np

X = np.array([[1,2],[1,4],[1,0],[10,2],[10,4],[10,0]])

kmeans = KMeans(n_clusters=2)
labels = kmeans.fit_predict(X)

score = silhouette_score(X, labels)

print("Silhouette Score:", score)