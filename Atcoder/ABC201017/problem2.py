import math
listA = list(map(int, input().split()))
man = 0
euc = 0
cheb = 0

for i in listA:
    man += abs(i)
    euc += i * i
    if(cheb < abs(i)):
        cheb = abs(i)

euc = math.sqrt(euc)
print(man)
print(euc)
print(cheb)
