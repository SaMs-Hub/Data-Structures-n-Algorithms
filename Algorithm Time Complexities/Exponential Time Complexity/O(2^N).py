def fibonicci(n):
    if n <= 1:
        return n
    else:
        return fibonicci(n-1) + fibonicci(n-2)
