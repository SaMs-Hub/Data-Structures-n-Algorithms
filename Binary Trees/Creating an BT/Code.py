class BinaryTree:

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def treeInput():
    rootData = int(input())
    if rootData == -1:
        return None

    root = BinaryTree(rootData)
    leftTree = treeInput()
    rightTree = treeInput()

    root.left = leftTree
    root.right = rightTree
    return root


def printTree(root):
    if root is None:
        return

    print(root.data, end=":")
    if root.left is not None:
        print("L", root.left.data, end=",")
    if root.right is not None:
        print("R", root.right.data, end="")
    print()

    printTree(root.left)
    printTree(root.right)

root = treeInput()
printTree(btn1)
