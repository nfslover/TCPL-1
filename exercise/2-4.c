/**
 * 题目: 重新编写squeeze(s1, s2)，将字符串s1中任何与字符串s2中字符匹配的都删除
 */
void squeeze(char s1[], char s2[]){
    int i, j, k;
    for(i = k = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;
        if(s2[j] == '\0')
            s1[k++] = s1[i];
    }
    s[k] = '\0';
}
