#include <stdio.h>
#include <stdlib.h>

int len(char *str) {
    int i, count;
    count = 0;
    for (i = 0; ; i++) {
        if (str[i] == '\0')  break;
        count++;
    }
    return count;
}

char* my_strstr(char* str, char* strSub) {
    int i, j, k;

    for (i = 0; str[i] != '\0';++i) {
        for (j = i, k = 0; strSub[k] != '\0' && str[j] == strSub[k]; j++, k++);
        if (k > 0 && strSub[k] == '\0') {
            ++i;
            return i;
        }
    }
    return -1;
}

void num_occ(char* str, char* strSub) {
    int sub_str_count = 0;	
    char* tmp = str;	// временный указатель
    int in_tmp = 0;
    while ((in_tmp = my_strstr(tmp, strSub)) != -1) {
        sub_str_count++;
        tmp = tmp + (in_tmp);
    }
    printf("%d\n", sub_str_count);
}

void str_rep(char* str1, char* str2, char* str3) {
    if (my_strstr(str1, str2) == -1) {
        printf("string not contain substring\n");
        return -1;
    }
    size_t i = 0, j, k = 0;
    char* dest[100000] = { 0 };
    // замена подстроки `str2` на `str3` при условии достаточного пространства
    while (str1[i] != '\0') {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (str2[j] == '\0' && j > 0) {
            // у нас есть совпадение: скопируем замену и пропустим ее
            i += j;
            for (j = 0; str3[j] != '\0'; j++) {
                dest[k++] = str3[j];
            }
        }
        else {
            // скопируем байт и пропустим его.
            dest[k++] = str1[i++];
        }
    }
    //dest[k] = '\0';
    int z = 0;
    while (dest[z] != 0) {
        printf("%c", dest[z]);
        z++;
    }
    printf("\n");
}

