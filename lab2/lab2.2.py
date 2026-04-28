import numpy as np

sample_mean = 52
population_mean = 50
std_dev = 5
n = 25

z = (sample_mean - population_mean) / (std_dev / np.sqrt(n))
print("Z-score:", z)