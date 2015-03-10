(N, K) = [int(i) for i in input().split(" ")]
numList = [int(i) for i in input().split(" ")]
#(N,K) = [6, 3]
#numList = [4, 3, 2, 5, 1, 6]
#(N,K) = [11, 1]
#numList = [11, 1, 2, 3, 5, 4, 6, 7, 8, 10, 9]
#(N,K) = [11, 14]
#numList = [11, 1, 2, 3, 5, 4, 6, 7, 8, 9, 10]

lookup = dict(zip([i for i in numList], [i for i in range(0,N)]))
i = 0
availableSwaps = K

if(K >= N):
	#Way quicker this way
	print(' '.join(map(str, [i for i in range (N, 0, -1)])))
else:
	while i < availableSwaps:
		index = lookup[N-i]
		if numList[i] < N-i:
			#swap!
			numList[index] = numList[i]
			numList[i] = N-i
			lookup[numList[index]] = index
		else:
			availableSwaps += 1
			if availableSwaps > N:
				break
		i = i+1
	print(' '.join(map(str, numList)))