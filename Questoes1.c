
int bitsUm(unsigned int n){

  int total = 0;

  for(; n != 0; n /= 2){
    total = n & 1;
  }

  return total;
}

int trailingZ(unsigned int n){
  int seqZsize = 0;

  while (n % 2 == 0){
    seqZsize += 1;

    n /= 2;
  }

  return seqZsize;
}

int qDig(unsigned int n){
  int size = 0;

  while (n > 0){
    size++;

    n / 10;
  }

  return size;
}


int strlen2(char str[]){
  int i;
  for(i = 0; str[i] != '\0'; i++){

  }

  return i;
}


char* strcat(char s1[], char s2[]){
  int i;
  int len_s1 = strlen2(s1);

  for(i = 0; s2[i] != '\0'; i++){
    s1[i + len_s1] = s2[i];
  }

  return s1;
}

char* strcpy(char* dest, char source[]){
  int i;
  for(i = 0; source[i] != '\0'; i++){
    dest[i] = source[i];
  }

  return dest;
}

int strcmp(char s1[], char s2[]){

  int i;
  for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
    if (s1[i] != s2[i]){
      return s1[i] - s2[i];
    }
  }

  if (s1[i] == '\0'){
    if (s2[i] == '\0'){
      return 0;
    }
    return -1;
  }
  return 1;
}

char *strstr (char s1[], char s2[]){

  int i, j;
  int startIndex = 0;
  for(i = 0; s1[i] != '\0'; i++){
    for(j = 0; s2[j] != '\0'; j++){
      if (s1[i + j] != s2[j]){
        break;
      }
    }
    if (s2[j] == '\0'){
      return s1 + i;
    }
  }

  return 0;
}

int main(){}
