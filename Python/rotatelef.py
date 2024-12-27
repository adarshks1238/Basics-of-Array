def reverse(arr, start, end):
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
n=int(input("Enter the size of the array:"))
print("Enter the array elements:")
a=[int(input())for _ in range(n)]
print("input array:",a)
d=int(input("Enter the no.of rotation:"))
d%=n
reverse(a,0,d-1)
reverse(a,d,n-1)
reverse(a,0,n-1)
print("Rotated array:",a)