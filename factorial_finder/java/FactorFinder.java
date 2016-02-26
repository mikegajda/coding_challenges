class FactorFinder {
	public static Integer factorial(Integer input) {
		if (input == 1) {
			return 1;
		}
		else {
			return input * factorial(input - 1);
		}
	}
	public static void main(String[] args) {
		int result = factorial(12);
		System.out.println("" + result);
	}
}