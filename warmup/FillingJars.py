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

#candyJars = zeros(numJars)

#list_of_lists = []
# for i in range(numOps):
# 	list = input().split(" ")
# 	list_of_lists.append(list)
# 
# for x in list_of_lists:
# 	index1 = int(x[0])-1
# 	index2 = int(x[1]) 
# 	candies = int(x[2])
# 	for y in range(index1, index2):
# 		candyJars[y] += candies
# 	
# print(sum(candyJars)//len(candyJars))