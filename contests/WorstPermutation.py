#(N, K) = [int(i) for i in input().split(" ")]
#numList = [int(i) for i in input().split(" ")]
(N,K) = [11, 2]
numList = [11, 1, 2, 3, 5, 4, 6, 7, 8, 9, 10]

i = 0
maxSwaps = K

if(K >= N):
	#Way quicker this way
	print(' '.join(map(str, [i for i in range (N, 0, -1)])))
else:
	while i < maxSwaps:
		index = numList.index(N-i)
		if numList[i] < N-i:
			#swap!
			temp = numList[i]
			numList[i] = numList[index]
			numList[index] = temp
		else:
			maxSwaps += 1
			if maxSwaps > N:
				break
		i = i+1
	print(' '.join(map(str, numList)))