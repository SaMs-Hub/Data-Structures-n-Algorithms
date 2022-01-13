import queue
class BinaryTree:
    
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
        
def printTreeDetailed(root):
    if (root == None):
        return
    
    print(root.data, end=":")
    if (root.left != None):
        print("L", root.left.data, end=",")
        
    if (root.right != None):
        print("R", root.right.data, end="")
    print()
    printTreeDetailed(root.left)
    printTreeDetailed(root.right)
    
    
def takeTreeInput():
    q = queue.Queue()
    print("Enter Root")
    rootData = int(input())
    if (rootData == -1):
        return None
    root = BinaryTree(rootData)
    q.put(root)
    while (not(q.empty())):
        currentNode = q.get()
        print("Enter the left child for", currentNode.data)
        leftChildData = int(input())
        if (leftChildData != -1):
            leftChild = BinaryTree(leftChildData)
            currentNode.left = leftChild
            q.put(leftChild)
        
        print("Enter the right child for", currentNode.data)
        rightChildData = int(input())
        if (rightChildData != -1):
            rightChild = BinaryTree(rightChildData)
            currentNode.right = rightChild
            q.put(rightChild)
    
    return root

def printBetweenK1K2(root, k1, k2):
    if (root == None):
        return 
    
    if (root.data > k2):
        printBetweenK1K2(root.left, k1, k2)
    elif (root.data < k1):
        printBetweenK1K2(root.right, k1, k2)
        
    else:
        print(root.data)
        printBetweenK1K2(root.left, k1, k2)
        printBetweenK1K2(root.right, k1, k2)
    
root = takeTreeInput()
printTreeDetailed(root)
print(printBetweenK1K2(root, 5, 10))
