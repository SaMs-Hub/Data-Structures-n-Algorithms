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
    
  
def numOfNodes(root):
    if (root == None):
        return 0
    
    leftCount = numOfNodes(root.left)
    rightCount = numOfNodes(root.right)
    
    return 1 + leftCount + rightCount
  

root = treeInput()
printTree(root)
print(numOfNodes(root))
