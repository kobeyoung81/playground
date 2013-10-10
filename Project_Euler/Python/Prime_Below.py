#!/usr/bin/env python

import sys
import math

if sys.argv[1:]:
	import string
	top=string.atol(sys.argv[1])
else:
	top=100L

primes = [ 2L ]
num_primes_found = 1

print 2L,'is prime'
candidate_prime = 3L
while candidate_prime <= top:
	divisible = False
	sqrt_reached = False
	sqrt_of_candidate_prime = int(math.sqrt(candidate_prime))
	for possible_divisor in primes:
		if candidate_prime % possible_divisor == 0L:
			divisible = True
			break
		if possible_divisor >= sqrt_of_candidate_prime:
			sqrt_reached = True
			break
	if sqrt_reached:
		sys.stdout.flush()
		primes.append(candidate_prime)
		num_primes_found += 1
		print 'prime #%d is %d' % (num_primes_found, candidate_prime)
	candidate_prime += 2L
