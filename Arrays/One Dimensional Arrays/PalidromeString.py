arr = ['a', 'b', 'b', 'a']

def isPalindrome(arr):

    i = 0
    j = len(arr) - 1

    while (i < j):
        if (arr[i] == arr[j]):
            i += 1
            j -= 1
        else:
            return False
    return True

if (isPalindrome(arr)):
    print("Palindrome")
else:
    print("Not a Palindrome")
