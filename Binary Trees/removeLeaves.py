class BinaryTree:
    
    def __init__(self,data):
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
    

# logic    
def removeLeaves(root):
    if (root == None):
        return None
    if ((root.left == None) and (root.right == None)):
        return None
    
    root.left = removeLeaves(root.left)
    root.right = removeLeaves(root.right)
    return root
    
root = treeInput()
printTree(root)
root = removeLeaves(root)
printTree(root)
