char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (str[0] != '\0' && 'a' <= str[0] && 'z' >= str[0])
		str[0] -= 32;
    // a ~ z 문자열 받으면 -32 해서 대문자로 만들어줌 
    // ASCII 코드표에서 'A'는 65 'a'는 97
	i = 1;
  // i 를 1로 설정해준건 배열의 인덱스값을 1부터 시작시킴. 
    // 위에 if문에서 문자열을 받게 설정했으니 저게 맞으면 아래 코드를 수행 시킬거고
    // 그럼 배열의 첫 글자는 대문자로 바뀐상태. 
    // 그럼 인덱스값이 0이 아닌 1의 값부터 글자를 비교한다. 
	while (str[i] != '\0')
	{
		if ((('a' <= str[i] && 'z' >= str[i]) ||
				('A' <= str[i] && 'Z' >= str[i])) &&
				(str[i - 1] < '0' || ('9' < str[i - 1] && str[i - 1] < 'A') ||
				(str[i - 1] > 'Z' && str[i - 1] < 'a') ||
				str[i - 1] < 'z'))
		{
			if ('a' <= str[i] && 'z' >= str[i])
				str[i] -= 32;
		}
		else if ('A' <= str[i] && 'Z' >= str[i])
			str[i] += 32;
		i++;
	}
	return (str);
}
