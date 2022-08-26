InputFileName = "stackheads.txt"
addresses = open(InputFileName).readlines()

min = int(addresses[0][:-1], 16)
max = int(addresses[0][:-1], 16)
count = 0
for addr in addresses:
	a = int(addr[:-1], 16)
	if a > max:
		max = a
	elif a < min:
		min = a
	count += 1

print("max: " + str(hex(max)))
print("min: " + str(hex(min)))
print("range: " + str(max-min))
print()