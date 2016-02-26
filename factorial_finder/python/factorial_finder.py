def factorial_finder_recursive(number):
	if number == 1:
		return number
	else:
		return number * factorial_finder_recursive(number - 1)

def factorial_finder_iterative(number):
	total = 1
	while number > 1:
		total *= number
		number -= 1
	return total

print(factorial_finder_recursive(10))
print(factorial_finder_iterative(10))