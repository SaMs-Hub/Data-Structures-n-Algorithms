class Node:

    def __init__(self, data):

        self.data = data
        self.next = None


a = Node(13)
b = Node(14)
a.next = b

print(a.data)
print(b.data)
print(a.next.data)
