class Node:
    
    def __init__(self, data):
        self.data = data
        self.next = None
        
        
def takeInput():
    
    inputList = [int(x) for x in input().split()]
    head = None
    tail = None
    for currData in inputList:
        if (currData == -1):
            break
        
        newNode = Node(currData)
        if (head == None):
            head = newNode
            tail = newNode
            
        else:
            tail.next = newNode
            tail = newNode
    return head


def printLL(head):
    while (head != None):
        print(str(head.data) + '->', end="")
        head = head.next
    print("None")
    return

def insertAtIR(head, i, data):
    if (i == 0):
        newNode = Node(data)
        newNode.next = head
        return newNode
    
    if (head == None):
        return None
    
    smallHead = insertatIR(head.next, i - 1, data)
    head.next =smallHead
    return head
    

head = takeInput()
printLL(head)

head = insertatIR(head, 2, 8)
printLL(head)
