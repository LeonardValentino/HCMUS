def calculateSum(k):
    res = 1
    temp = 1
    for i in range(1,2*k + 1):
        temp *= i
        if i % 2 == 0:
            res += 1/temp
    return res

k = int(input("Nhap k: "))
print('Tong la: ', calculateSum(k))
