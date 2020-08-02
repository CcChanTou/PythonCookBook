/* 编写函数squeeze(s1, s2)，将字符串s1中任何与字符串s2中字符匹配的字符都删掉 */
/* 这里直接在main中举例实现 */
/* 下面是抄的标准答案，由于自己对for循环的理解太过粗浅，想了半天 */
#include <stdio.h>
int main()
{
    char s1[] = "asdfghjk";
    char s2[] = "sg";
    int i, j, k;
 
    for (i = k = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
        {
            ;
        }
        if (s2[j] == '\0')
        {
            s1[k++] = s1[i];
        }
        //如果s1的某个字符，与s2整个字符串都不相同，就会把s2遍历到最后，使s2[j] == '\0'
        //就会执行上面这个if语句
        //如果在遍历s2时，中间出现一个与s1相同的，for跳出，if不满足跳出，就什么都不执行，这个重复的值不执行拷贝，也就相当于被删除了
    }
    s1[k] = '\0';
    printf("%s", s1);
    return 0;
}
