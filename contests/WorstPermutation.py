(N, K) = [int(i) for i in input().split(" ")]
numList = [int(i) for i in input().split(" ")]

#(N,K) = [5, 1]
#numList = [4, 2, 3, 5, 1]
sortedList = sorted(numList, reverse=True)

for i in range(0, K):
	index = numList.index(sortedList[i])
	if numList[i] < sortedList[i]:
		#swap!
		temp = numList[i]
		numList[i] = numList[index]
		numList[index] = temp
		
print(' '.join(map(str, numList)))