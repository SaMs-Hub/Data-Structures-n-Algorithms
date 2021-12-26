# creating stack
class Stack:

    def __init__(self):
        self.__data = []

    def push(self, item):
        self.__data.append(item)

    def pop(self):
        if (self.isEmpty()):
            print("Hey, Stack empty")
            return 
        return self.__data.pop()

    def top(self):
        if (self.isEmpty()):
            print("Hey, Stack empty")
            return
        return self.__data[len(self.__data) - 1]

    def size(self):
        return len(self.__data)

    def isEmpty(self):
        return self.size() == 0


s = Stack()

#pushing to stack
s.push(12)
s.push(14)
s.push(18)

print(s.top())

#popping from stack
while (s.isEmpty() is False):
    print(s.pop(), s.size())
