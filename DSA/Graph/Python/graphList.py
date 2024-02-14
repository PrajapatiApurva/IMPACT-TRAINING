class Graph:
    def __init__(self, vert) -> None:
        self.vertices = vert
        self.adj_list = {v: [] for v in range(vert)}
    
    def has_vertex(self,u,v):
        return 0<= u < self.vertices and 0 <= v < self.vertices
    
    def has_edge(self,u,v):
        if self.has_vertex(u,v):
            return (v in self.adj_list[u]) and (u in self.adj_list[v])
        else:
            return False
            
    def add_edge(self, u, v):
        if self.has_vertex(u,v):
            if not self.has_edge(u,v):
                self.adj_list[u].append(v)
                self.adj_list[v].append(u)
            else:
                print("Edge is already present...")
        else:
            print("Invalid Systax...")
    
    def remove_edge(self,u,v):
        if self.has_vertex(u,v):
            if self.has_edge(u,v):
                self.adj_list[u]=[vertex for vertex in self.adj_list[u] if vertex!=v]
                self.adj_list[v]=[vertex for vertex in self.adj_list[v] if vertex!=u]
            else:
                print("Edge not present...")
        else:
            print("Invalid Systax...")
            
    def bfs(self,src):
        vis = []
        queue = [src]

        while queue:
            if queue[0] not in vis:
                vis.append(queue[0])
                print(queue[0],end=" ")

            for node in self.adj_list[queue[0]]:
                if node not in vis:
                    queue.append(node)
            queue.pop(0)
            
    def dfs(self,visited, s):
        if s not in visited:
            print(s,end=" ")
            visited.append(s)
            for neighbour in self.adj_list:
                self.dfs(visited,neighbour)

    
    def print(self):
        for node in self.adj_list:
            print(node ,":", self.adj_list[node])

obj = Graph(6)
obj.add_edge(0, 1)
obj.add_edge(0, 2)
obj.add_edge(1, 2)
obj.add_edge(1, 3)
obj.add_edge(1, 5)
obj.add_edge(3, 4)
obj.add_edge(4, 2)
# obj.print()
# print()
# obj.remove_edge(4,1)
# obj.print()
print("Searching Using BFS: ",end=" ")
obj.bfs(1)
print("\n\n")
visited=list()
print("Searching Using DFS: ",end=" ")
obj.dfs(visited,1)
print()
obj.print()

# class Graph:
#     def __init__(self, vno):
#         self.vertex_count = vno
#         self.adj_list = {v: [] for v in range(vno)}

#     def add_edge(self, u, v, weight=1):
#         if 0 <= u < self.vertex_count and 0 <= v < self.vertex_count:
#             self.adj_list[u].append((v, weight))
#             self.adj_list[v].append((u, weight))
#         else:
#             print("Invalid Vertex")

#     def remove_edge(self, u, v):
#         if 0 <= u < self.vertex_count and 0 <= v < self.vertex_count:
#             self.adj_list[u] = [(vertex, weight) for vertex, weight in self.adj_list[u] if vertex != v]
#             self.adj_list[v] = [(vertex, weight) for vertex, weight in self.adj_list[v] if vertex != v]
#         else:
#             print("Invalid Vertex")

#     def has_edge(self, u, v) -> bool:
#         if 0 <= u < self.vertex_count and 0 <= v < self.vertex_count:
#             return any(vertex == v for vertex, _ in self.adj_list[u])
#         else:
#             print("Invalid Vertex")
#             return False

#     def print_adj_list(self):
#         #  key ,value=list
#         for vertex, n in self.adj_list.items():
#             print("V", vertex, " : ", n)

#     def bfs(self, s):
#         q = []
#         visited = [False] * self.vertex_count
#         q.append(s)
#         visited[s] = True
#         while len(q) != 0:
#             current_node = q.pop(0)
#             print(current_node, end=" ")
#             for neighbor in self.adj_list[current_node]:
#                 if not visited[neighbor[0]]:
#                     q.append(neighbor[0])
#                     visited[neighbor[0]] = True


# def dfs(visited, g, v):
    # if v not in visited:
    #     print(v)
    #     visited.add(v)
    #     for neighbour in g.adj_list:
    #         dfs(visited, g, neighbour)


# g = Graph(5)
# g.add_edge(0, 1)
# g.add_edge(1, 2)
# g.add_edge(2, 3)
# g.add_edge(3, 4)


# g.bfs(3)
# # visited = set()  # this is for the dfs fuction
# # dfs(visited, g, 1)


# # def data():
# #     u = int(input("Enter the Source"))
# #     v = int(input("Enter the Destination"))
# #     return u, v


# # def source():
# #     s = int(input("Enter the Source where u want to start"))
# #     return s


# # def menu():
# #     n = int(input("How many Vertices You want?"))
# #     g = Graph(n)
# #     flag = True
# #     while flag:
# #         print("\n1 for add_edge\n2 for remove_edge\n3 for has_edge\n4 print adj_list\n5 for bfs\n6 for the dfs\nEnter "
# #               "the Choice")
# #         choice = int(input())
# #         match choice:
# #             case 1:
# #                 u, v = data()
# #                 g.add_edge(u, v)

# #             case 2:
# #                 u, v = data()
# #                 g.remove_edge(u, v)

# #             case 3:
# #                 u, v = data()
# #                 g.has_edge(u, v)

# #             case 4:
# #                 g.print_adj_list()

# #             case 5:
# #                 s = source()
# #                 g.bfs(s)
# #             case 6:
# #                 s = source()
# #                 dfs(visited, g, s)
# #                 # g.dfs_traversal(s)
# #             case 0:
# #                 flag = False
# #             case _:
# #                 print("Enter the Valid choice")


# # menu()