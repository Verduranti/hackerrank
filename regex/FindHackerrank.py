import re

numCases = int(input())
cases = []
for i in range(0, numCases):
	cases.append(input())

#numCases = 4
#cases = ["i love hackerrank",
#"hackerrank is an awesome place for programmers",
#"hackerrank",
#"i think hackerrank is a great place to hangout"]

pattern1 = re.compile(r'^hackerrank')
pattern2 = re.compile(r'hackerrank$')

for i in range(0, numCases):
	if pattern1.search(cases[i]) and pattern2.search(cases[i]):
		print("0")
	elif pattern1.search(cases[i]):
		print("1")
	elif pattern2.search(cases[i]):
		print("2")
	else:
		print("-1")