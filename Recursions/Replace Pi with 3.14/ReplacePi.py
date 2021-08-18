def replacePi(s):
    # base case
    if len(s) == 0 or len(s) == 1:
        return s

    # logic
    if s[0] == 'p' and s[1] == 'i':
        smallOutput = replacePi(s[2:])
        return "3.14" + smallOutput
    else:
        smallOutput = replacePi(s[1:])
        return s[0] + smallOutput


print(replacePi('hellopi'))
