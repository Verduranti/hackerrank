(numJars, numOps, sum) = [int(i) for i in input().split(" ")] + [0]
for i in range(numOps):
	(index1, index2, candies) = [int(i) for i in input().split(" ")]
	sum += candies * (index2 + 1 - index1)
print(sum//numJars)