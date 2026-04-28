from scipy import stats

data = [45, 50, 47, 52, 46, 49, 48]
population_mean = 50

t_stat, p_value = stats.ttest_1samp(data, population_mean)

print("T-statistic:", t_stat)
print("P-value:", p_value)

if p_value < 0.05:
    print("Reject Null Hypothesis")
else:
    print("Fail to Reject Null Hypothesis")