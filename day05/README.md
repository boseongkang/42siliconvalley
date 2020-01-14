typora 에디터가 다운로드 되지 않아 .c 파일로 올릴 예정

위 파일들을 테스트 컴파일 하려면 

gcc main.c ft_putchar.c ft_str.c 하고 엔터 치면 a.out 이라는 파일이 생성.

./a.out 으로 컴파일된 파일을 실행할 수 있다.

컴파일된 파일 이름 바꾸려면 gcc -o 설정할 파일이름입력 후 나머지 파일 실행.

<hr>
strcpy(대상문자열, 원본문자열);

char *strpcy(char *dest, char *source);


대상문자열의 포인터를 반환
<hr>

main에서는 
```
char s1[] = "Hello"; 

char s2[] = "Good";

strcpy(s1, s2);

printf("%s\n", s1);
```

이렇게 하면 출력을 s1을 해도 s2안에 담겨있는 GOOD이 출력된다. 
