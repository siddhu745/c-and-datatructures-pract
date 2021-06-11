def bubblesort(list,length):
    for i in range(length):
        for j in range(length-i-1):
            if list[j]>list[j+1]:
                temp=list[j]
                list[j]=list[j+1]
                list[j+1]=temp
                print(list)
list=[3,8,9,1,4,7]
bubblesort(list,len(list))
print("sorted list is",list)
