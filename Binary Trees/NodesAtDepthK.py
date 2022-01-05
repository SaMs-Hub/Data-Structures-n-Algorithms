class BinaryTree:
    
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
        
def treeInput():
    
    rootData = int(input())
    if (rootData == -1):
        return None
    
    root = BinaryTree(rootData)
    leftTree = treeInput()
    rightTree = treeInput()
    
    root.left = leftTree
    root.right = rightTree
    
    return root
    
def printTree(root):
    if (root == None):
        return
    
    print(root.data, end=":")
    
    if (root.left != None):
        print("L", root.left.data, end=",")
    
    if (root.right != None):
        print("R", root.right.data, end="")
    print()
    
    printTree(root.left)
    printTree(root.right)

def printDepth(root, k):
    if (root == None):
        return
    if (k == 0):
        print(root.data)
        return
    
    printDepth(root.left, k - 1)
    printDepth(root.right, k - 1)

root = treeInput()
printTree(root)
printDepth(root, 2)
