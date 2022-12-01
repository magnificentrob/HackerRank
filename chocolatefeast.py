def chocolateFeast( n, c, m):
	b = n/c
	w = n/c
	while w >= m:
		r = w - w % m
		w = w - r
		bw = r/m
		b = b + bw
		w = w + bw
		if w % 2 == 0:
			b = b + w/m
			return int(b)
	return int(b)


print(chocolateFeast(15,3,2), "Answer should be 9.")
print(chocolateFeast(10,2,5) , "Answer should be 6.")
print(chocolateFeast(12,4,4), "Answer should be 3.")
print(chocolateFeast(6,2,2), "Answer should be 5.")