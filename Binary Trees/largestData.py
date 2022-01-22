class BinaryTree:
    
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
      
    #input
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
 
# largest of data
def largestData(root):
    if (root == None):
        return -1
    
    leftLargest = largestData(root.left)
    rightLargest = largestData(root.right)
    
    largest = max(root.data, leftLargest, rightLargest)
    return largest
    
root = treeInput()
printTree(root)
print(largestData(root))
