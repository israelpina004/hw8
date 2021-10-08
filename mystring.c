#include <stdio.h>

int mystrlen(char *s) {
	int i = 0;
	while(s[i] != '\0') {
		i++;
	}
	return i;
}

char* mystrcpy(char *dest, char *source) {
	int i;
	int len = mystrlen(source)+1;
	for (i = 0; i < len; i++) {
		dest[i] = source[i];
	}
	return dest;
}

char* mystrncpy(char *dest, char *source, int n) {
	int i;
	for (i = 0; i < n && source[i] != '\0'; i++) {
		dest[i] = source[i];
	}
	for (i = i; i < n; i++) {
		dest[i] = '\0';
	}
	return dest;
}

int mystrcmp(char *s1, char *s2) {
	int len = mystrlen(s1);
	int i;
	for (i = 0; i < len && s2[i] != '\0' && s2[i] != ' '; i++) {
		if (s1[i] < s2[i] || s1[i] > s2[i]) {
			return s1[i] - s2[i];
		}
	}
	if (len < mystrlen(s2)) {
		return -1;
	}
	else if(len > mystrlen(s2)) {
		return 1;
	}
	return 0;
}

char* mystrchr(char *s, char c) {
	int i;
	int len = mystrlen(s)+1;
	for (i = 0; i < len; i++) {
		if (s[i] == c) {
			char *result = s+i;
			return result;
		}
	}
	return NULL;
}
