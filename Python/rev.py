n=int(input("Enter the size of the array:"))
print("Enter the array elements:")
a=[int(input())for _ in range(n)]
print("input array:",a)
for i in range(n//2):
    temp=a[i]
    a[i]=a[n-i-1]
    a[n-1-i]=temp
print("Reversed array:",a)