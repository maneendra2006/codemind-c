#include <stdio.h>
int main() {
	char str[101];
	scanf("%[^
]", str);
	int i;
	int up, lw, d, sp;
	up = lw = d = sp = 0;
	for (i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			up++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			lw++;
		else if (str[i] >= '0' && str[i] <= '9')
			d++;
		else
			sp++;
	}
	
	printf("%d", lw);
}
