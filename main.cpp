double my_pow(double number, unsigned int n){
	int result = 1
	for (int i = 0; i < n; ++i){
		result*= number;
	}
	return result;
}