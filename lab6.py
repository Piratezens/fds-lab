import pandas as pd

df = pd.read_csv("data.csv")

df = pd.get_dummies(df, columns=['gender'])

df['age_group'] = df['age'] // 10

print(df.head())