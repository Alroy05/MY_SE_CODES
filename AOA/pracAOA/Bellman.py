import numpy as np

noOfVertices=int(input("Enter the number of vertices: "))
distList=[1000]*noOfVertices
sourceVertex=int(input("Enter the source vertex: "))
distList[sourceVertex]=0
adjacencyMatrix=[]

for i in range(noOfVertices):
    tempList=[]
    for j in range(noOfVertices):
        tempVar=int(input(f'Enter the cost from {i}->{j}: '))
        tempList.append(tempVar)
    adjacencyMatrix.append(tempList)

adjacencyMatrix=np.array(adjacencyMatrix)

for i in range(noOfVertices-1):
    for j in range(noOfVertices):
        for k in range(noOfVertices):
            if(adjacencyMatrix[j][k]!=0):
                if(distList[k] > distList[j]+adjacencyMatrix[j][k]):
                    distList[k] = distList[j]+adjacencyMatrix[j][k]

for i in range(noOfVertices):
    print(distList[i])


