class Node:
    
    def __init__(self, initData):
        self.data = initData
        self.next = None

class Stack:
    
    def __init__(self):
        self.head = None
        self.count = 0
    
    def push(self, item):
        newNode = Node(item)
        newNode.next = self.head
        self.head = newNode
        self.count = self.count + 1
        
    def pop(self):
        if (self.isEmpty()):
            print("stack empty")
            return
        
        data = self.head.data
        self.head = self.head.next
        self.count -= 1
        return data
        
    def top(self):
        if (self.isEmpty()):
            print("stack empty")
            return
        data = self.head.data
        return data
        
    def size(self):
        return self.count
        
    def isEmpty(self):
        return self.size() == 0
    
s = Stack()
s.push(12)
s.push(13)
s.push(14)

print(s.size(),s.top(), s.pop(), s.top())
