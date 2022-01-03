### for O(n2)

arr1 = [1, 2, 3, 4]
arr2 = [4, 5, 6, 7]

def arrayIntersection(arr1, arr2):
    l1 = len(arr1)
    l2 = len(arr2)
    
    
    same = []
    for i in range(l1):
        for j in range(l2):
            if (arr1[i] == arr2[j]):
                same.append(arr1[i])
                
                
    return same

print(arrayIntersection(arr1, arr2))


### for 
