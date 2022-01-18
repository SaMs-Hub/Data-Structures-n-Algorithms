import queue
class Graph:
    
    def __init__(self, nVertices):
        self.nVertices = nVertices
        self.adjMatrix = [[0 for i in range(nVertices)] for j in range(nVertices) ]
        
    def __str__(self):
        return str(self.adjMatrix)
    
    def addEdge(self, v1, v2):
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1
        
    def bfs(self):
        q = queue.Queue()
        q.put(0)
        visited = [False for i in range(self.nVertices)]
        visited[0] = True
        while (q.empty() is False):
            u = q.get()
            print(u)
            for i in range(self.nVertices):
                if (self.adjMatrix[u][i] > 0 and visited[i] is False):
                    q.put(i)
                    visited[i] = True 
        
g = Graph(5)
g.addEdge(0,1)
g.addEdge(0,2)
g.addEdge(1,3)
g.addEdge(2,3)
g.addEdge(2,4)

g.bfs()
