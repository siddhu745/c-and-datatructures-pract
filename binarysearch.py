def binary_search(l,key):
    low=0
    high=len(l)-1
    while low<=high:
        mid=(low+high)//2
        if l[mid]==key:
            return mid
        elif l[mid]>key:
            high=mid-1
        else:
            low=mid+1
l=[1,2,3,4,5,6]
key=5
print(binary_search(l,key))
