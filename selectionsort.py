def selectionsort(list,length):
    for i in range(length):
        minindex=i
        for j in range(i+1,length):
            if list[j]<list[minindex]:
                minindex=j
        list[i],list[minindex]=list[minindex],list[i]
list=[9,4,7,2,910,1]
selectionsort(list,len(list))
print(list)
