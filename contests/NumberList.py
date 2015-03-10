numCases = int(input())
maxList = []

#numCases = 1
#(N, K) = [4, 3]
#A = [3, 2, 1, 4]
#print(A[2:3])

#every number greater than k is guaranteed to be the max in a list at least once
for test in range(0, numCases):
	(N, K) = [int(i) for i in input().split(" ")]
	A = [int(i) for i in input().split(" ")]
	maxes = 0
	for i in range(0, N):
		for j in range(i+1, N+1):
			#print(i)
			#print(j)
			#print(A[i:j])
			#if max(A[i:j]) > K:
			for k in range(j-1, i-1, -1):
				#print(k)
				#print(A[k])
				if A[k] > K:
					maxes += 1
					break

	maxList.append(maxes)
	
for i in maxList:
	print(i)