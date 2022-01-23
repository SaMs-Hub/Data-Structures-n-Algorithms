# using standards

arr = [-1, 2, 3, 4, 5]

def function(arr):
    
   
    
    largest = arr[0]
    smallest = arr[0]
    for i in range(1, len(arr)):
        if (arr[i] > largest):
            largest = arr[i]
        if (arr[i] < smallest):
            smallest = arr[i]
            
    print(largest, smallest)
    

function(arr)

# using language tools

arr = [-1, 2, 3, 4, 5]

def function(arr):
    
    largest = float('-inf')
    smallest = float('inf')
    
    
    for i in range(0, len(arr)):
        if (arr[i] > largest):
            largest = arr[i]
        if (arr[i] < smallest):
            smallest = arr[i]
            
    print(largest, smallest)
    
function(arr)
