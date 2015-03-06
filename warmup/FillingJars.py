firstline = input()
numJars = int(firstline.split(" ")[0])
numOps = int(firstline.split(" ")[1])

sum = 0

for i in range(numOps):
	list = input().split(" ")
	index1 = int(list[0])
	index2 = int(list[1]) 
	candies = int(list[2])
	sum += candies * (index2 + 1 - index1)

print(sum//numJars)