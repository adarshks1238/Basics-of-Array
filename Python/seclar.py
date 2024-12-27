n=int(input("Enter the size of the array:"))
print("Enter the array elements:")
a=[int(input())for _ in range(n)]
print("input array:",a)
lar=seclar=float('-inf')
for i in range(n):
    if a[i]>lar:
        seclar=lar
        lar=a[i]
    elif a[i]>seclar and a[i]<lar:
        seclar=a[i]
if seclar==float('-inf'):
    print("Cannot find the second largest elemet")
else:
    print("Second largest element is ",seclar)