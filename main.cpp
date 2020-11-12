double my_pow(double number, int n){
	bool negative = false;
	if (n < 0){
		negative = true;
		n*=-1;
	}
	double result = 1; 
	for (int i = 0; i < n; ++i){
		result*= number; 
	}
	if (negative){
		result = 1 / result;
	}
	return result;
}