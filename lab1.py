import pandas as pd

df = pd.read_csv("data.csv")

col = df['marks']

print("Mean:", col.mean())
print("Median:", col.median())
print("Mode:", col.mode()[0])
print("Standard Deviation:", col.std())