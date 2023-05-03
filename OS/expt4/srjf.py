n = 3
# ----------Process related times--------------------------
process=[i for i in range(n)]
# at =[0, 0, 0, 0, 0]
# bt =[24, 2, 4, 1, 3]
at = [0, 0, 0]
bt = [10, 5, 8]
tat = [0 for i in range(n)]
wt = [0 for i in range(n)]


#---------------Building table starts here-------------------------
table = [[process[i], at[i], bt[i], tat[i], wt[i]] for i in range(n)]
table.sort(key= lambda x:x[2]) #Sorting in order of arrival time.

# ganttChart = [table[i][0] for i in range(n)]


#--------------Will Calculate TAT and WT-------------------------------
current = table[0][1]
totalTAT = 0
totalWT = 0

for i in range(n):
    current = current + table[i][2]
    table[i][3] = current - table[i][1]
    table[i][4] = table[i][3] - table[i][2]
    totalTAT = totalTAT + table[i][3]
    totalWT = totalWT + table[i][4]
    
table.sort(key=lambda x:x[0]) #Sorting in order of PID

#--------------printing part------------------------------------
# print(ganttChart)
print("Process" +" at\t" +" bt\t" +"tat\t" +"wt")
for i in range(n):
    for j in range(5):
        print(table[i][j], end="\t")
    print("\n")
    
    
print(f"Average TAT= {totalTAT/n}")
print(f"Average WT = {totalWT/n}")