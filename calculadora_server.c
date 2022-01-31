/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

float * soma_1_svc(input *argp, struct svc_req *rqstp)
{
	static float result;
	
	result = argp->n1 + argp->n2;
	printf("Requisição recebida: somando %f e %f\n", argp->n1, argp->n2);
	printf("Resposta enviada: %f\n", result);

	return &result;
}

float * sub_1_svc(input *argp, struct svc_req *rqstp)
{
	static float result;
	
	result = argp->n1 - argp->n2;
	printf("Requisição recebida: subtraindo %f de %f\n", argp->n2, argp->n1);
	printf("Resposta enviada: %f\n", result);

	return &result;
}


float * mult_1_svc(input *argp, struct svc_req *rqstp)
{
	static float result;
	
	result = argp->n1 * argp->n2;
	printf("Requisição recebida: multiplicando %f por %f\n", argp->n1, argp->n2);
	printf("Resposta enviada: %f\n", result);

	return &result;
}


float * div_1_svc(input *argp, struct svc_req *rqstp)
{
	static float result;
	
	result = argp->n1 / argp->n2;
	printf("Requisição recebida: dividindo %f por %f\n", argp->n1, argp->n2);
	printf("Resposta enviada: %f\n", result);

	return &result;
}

