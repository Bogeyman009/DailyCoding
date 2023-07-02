key = int(input("Enter the number you want to check whether it conatin or not : "))

arr=[1,23,45,4,6,7,5,7,9,9,98,65,45,34,56]

if key in arr:
    for i in range(len(arr)):
        if arr[i] == key:
            print("The {} is present in the index {}".format(key,i))
else:
    print("Key doesn't present in the array")
    