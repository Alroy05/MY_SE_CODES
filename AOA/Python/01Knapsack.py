import numpy as np

profit,weight = [0],[0]
numItem = int(input("Enter the number of items: "))
capacity = int(input("Enter the capacity: "))

for i in range(numItem):
    profit.append(int(input(f"Enter the profit of item {i+1}: ")))
    weight.append(int(input(f"Enter the weight of item {i+1}: ")))

table = np.zeros((numItem+1,capacity+1))

for i in range(1,numItem+1):
    for w in range(1,capacity+1):
        if weight[i] <= w:
            table[i][w] = max(table[i-1][w],profit[i]+table[i-1][w-weight[i]])
        else:
            table[i][w] = table[i-1][w]

print(table)
print(f'Maximum profit: {table[numItem][capacity]}')
