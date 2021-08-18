def replaceChar(str, a, b):
    # base case
    l = len(str)
    if l == 0:
        return str

    # hypothesis/logic
    smallerOutput = replaceChar(str[1:], a, b)
    if str[0] == a:
        return b + smallerOutput
    else:
        return str[0] + smallerOutput


print(replaceChar('abba jabba', 'a', 'b'))
