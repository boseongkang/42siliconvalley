
void ft_putchar(char c);
//ft_putchar 라고 만든 write(printf 처럼 출력)기능을 가진 함수를 호출
void ft_putstr(char *str)
{
	while (*str != '\0')
  // '\0' 을 사용한 이유는 
  // '\0'은 문자열의 끝이다. 이 문자열은 NULL문자이며 아스키코드에서 0이다.
		ft_putchar(*str++);
}
// 코드를 보면 포인터 str이 '\0'이 되버리면 문자열이 종료되니 '\0'이 되기 전까지 while문으로 반복한다. 
