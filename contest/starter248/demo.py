arr = [1, 2, 3, 4, 5]
target = 7

dict = {}

#{{1, 0}, {2, 1}}


for i in range(len(arr)):
    rem = target - arr[i]
    if rem in dict:
        j = dict[rem]
        print(i, j)
    dict[arr[i]] = i

# print(-1, -1)
