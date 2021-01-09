class stacks:
    top = 0
    length = 0
    arr = []
    def __init__(self):
        length = getInput(self, "Please enter the length of the array: ")
        top = -1
        for i in range(length):
            arr[i] = 0
            #Initializing all valued to zero. 

    def getInput(self, prompt):
        inp = int(input((prompt)))
        return inp
    
    def isEmpty(self):
        if(top == -1):
            return True
        else:
            return False
    def isFull(self):
        if(top == (length-1)):
            return True
        else:
            return False
    def push(self, val):
        if(isFull()):
            print("Stack Overflow")
        else:
            arr[top] = val
            top += 1
    def pop(self):
        if(isEmpty()):
            print("Stack Underflow")
            return -1
        else:
            popValue = arr[top]
            arr[top] = 0
            top -= 1
            return popValue
    def count(self):
        return (top + 1)
    def peek(self, pos):
        if(isEmpty()):
            print("Stack Underflow")
            return -1
        else:
            return arr[pos]
    def change(self, pos, val):
        print("Changing the value to ", val, " at position ", pos)
        arr[pos] = val
    def display(self):
        print("All the values in the stack are: ")
        i = length
        while(i>=0):
            print(arr[i])
            i -= 1

