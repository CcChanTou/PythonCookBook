/* 返回字符串t在s中最右边出现的位置，如果s中不包含t，则返回-1 */
int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        {
            ;
        }
        if (k > 0 && t[k] == '\0')
            return i+k-1;
    }
}