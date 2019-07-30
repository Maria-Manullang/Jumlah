 #include<stdio.h>
#include<string.h>


int main()
{
    int i, j;
    char a[27] = "MGALRSZEIUOWPTOBDKHCNVFXJY-";
    char gg[28][3] = {"01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27"};

    char input[100];

    scanf("%s", input);



    for(i=0;i<strlen(input);i++)
    {
        for(j=0;j<27;j++)
        {
            if(input[i] == a[j])
            {
                printf("%s", gg[j]);
                break;
            }
        }
    }
    return 0;
}
