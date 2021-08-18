def remove(s, x):
    # base case
    if len(s) == 0:
        return s

    # logic
    # checking if 1st word is the word that's needed to be removed
    if s[0] == x:
        smallerOutput = remove(s[1:], x)
        return smallerOutput
    else:
        smallerOutput = remove(s[1:], x)
        return s[0] + smallerOutput


print(remove("abcdabab", 'a'))
