/**

_printint - prints an integer

@list: argument to print

Return: number of digits printed
*/
int _printint(va_list list)
{
	int num = va_arg(list, int);
	int digit_count = 0;
	int is_negative = 0;

 	if (num < 0) {
         	is_negative = 1;
         	num *= -1;
         	digit_count++;
 	}
