string = input()

def isBalanced(str):
    
    s = []
    for char in str:
        if (char in "({["):
            s.append(char)
        elif (char in ')'):
            if (not s or s[-1] != '('):
                return False
            s.pop()
        elif (char in ']'):
            if (not s or s[-1] != '['):
                return False
            s.pop()
        elif (char in '}'):
            if (not s or s[-1] != '{'):
                return False
            s.pop()
    if (not s):
        return True
    
    return False

print(isBalanced(string))
