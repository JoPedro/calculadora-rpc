struct input {
	float n1;
	float n2;
	char op;
};

program CALCULADORA_PROG{
	version CALCULADORA_VERSION{
		float soma(input) = 1;
		float sub(input) = 2;
		float mult(input) = 3;
		float div(input) = 4;
	} = 1;
} = 0x2fffffff;
