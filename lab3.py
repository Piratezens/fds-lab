import numpy as np
import matplotlib.pyplot as plt

data = np.random.uniform(0, 100, 10000)

sample_means = []

for i in range(1000):
    sample = np.random.choice(data, size=30)
    sample_means.append(np.mean(sample))

plt.hist(sample_means, bins=30)
plt.title("CLT Demonstration")
plt.show()