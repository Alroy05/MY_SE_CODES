import numpy as np

adjacencyMatrix=[]

numVertices = input("Enter the number of vertices: ")
numVertices=int(numVertices)
for i in range(numVertices):
    tempList = []
    for j in range(numVertices):
        tempVar=int(input("Enter the value of edge between "+str(i)+" and "+str(j)+": "))
        tempList.append(tempVar)
    adjacencyMatrix.append(tempList)

adjacencyMatrix= np.array(adjacencyMatrix)

for k  in range(numVertices):
    for i in range(numVertices):
        for j in range(numVertices):
            adjacencyMatrix[i][j]=min(adjacencyMatrix[i][j],adjacencyMatrix[i][k]+adjacencyMatrix[k][j])
    print("A"+str(k))
    print(adjacencyMatrix)

        