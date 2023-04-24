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
	int temp = num;
 	while (temp > 0) {
         	temp /= 10;
         	digit_count++;
 	}
	char num_str[digit_count + 1];
 	num_str[digit_count] = '\0';

 	for (int i = digit_count - 1; i >= 0; i--) {
         	num_str[i] = (num % 10) + '0';
         	num /= 10;
 	}
	if (is_negative) {
         	return (write(STDOUT_FILENO, "-", 1) + write(STDOUT_FILENO, num_str, digit_count));
 	} else {
         	return (write(STDOUT_FILENO, num_str, digit_count));
 	}
}
