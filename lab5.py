import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("data.csv")

df.plot(x='year', y='sales', kind='line')
plt.show()

df.plot(x='product', y='sales', kind='bar')
plt.show()

df['sales'].plot(kind='box')
plt.show()