def insertionsort(list,length):
    for i in range(1,length):
        value=list[i]
        gap=i
        while gap>0 and list[gap-1]>value:
            list[gap]=list[gap-1]
            list[gap-1]=value
            gap=gap-1
list=[7,8,9,5,6,1]
insertionsort(list,len(list))
print(list)
